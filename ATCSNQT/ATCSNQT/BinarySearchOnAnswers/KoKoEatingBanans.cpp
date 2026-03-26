#include<bits/stdc++.h>
using namespace std;
int maxim(vector<int>&vc){
    int maxi=INT_MIN;
    for(int i=0;i<vc.size();i++){
        if(vc[i]>maxi){
            maxi=vc[i];
        }
    }
    return maxi;
}
int CalculateReqTime(vector<int>&vc,int hourly){
   int   totalH=0;
    for(int i=0;i<vc.size();i++){
        totalH+=ceil((double)(vc[i])/(double)(hourly));
    }
    return totalH;
}
int KoKoEating(vector<int>&vc,int h){
    int maxi=maxim(vc);
    for(int i=1;i<maxi;i++){
        int reqtime=CalculateReqTime(vc,i);
        if(reqtime<=h){
            return i;
        }
    }


    return  -1;
}
int main(){
vector<int>vc{3,6,7,11};
int h;
cout<<"enter hours";
cin>>h;
int res=KoKoEating(vc,h);
cout<<res;
}