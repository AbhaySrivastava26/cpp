#include<bits/stdc++.h>
using namespace std;
void subsetsum(int index,int sum,vector<int>&arr,vector<int>&ans,int n){
    if(index==n){
        ans.push_back(sum);
        return;
    }
    subsetsum(index+1,sum+arr[index],arr,ans,n);
    subsetsum(index+1,sum,arr,ans,n);
}
int main(){
    int n;
    cout<<"enter n value"<< " ";
   
    cin >> n;
vector<int>vc(n);
cout<<"enter values";
cout<<endl;
for(int i=0;i<n;i++){
    cin>>vc[i];
    cout<<endl;
}

vector<int>ans;
subsetsum(0,0,vc,ans,n);
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
    return 0;
}