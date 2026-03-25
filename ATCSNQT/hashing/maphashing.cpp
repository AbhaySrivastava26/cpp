#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
   
   cout<<"enter size of the array:";
    cin>>n;
    int arr[n];
    map<int ,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }


    //precompute using hash fuction
   
    // for(auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    
int q;
cin>>q;
cout<<"enter the elements for searching ";
while(q--){
    int num;
    cin>>num;
    //fetch data
    cout<<mpp[num]<<endl;
 
}
return 0;
}