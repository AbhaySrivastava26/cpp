#include<bits/stdc++.h>


using namespace std;

void leaders(int arr[],int n){
    vector<int>ans;
     int maxi=arr[n-1];
     ans.push_back(maxi);
for(int i=n-2;i>=0;i--){
   
    if(arr[i]>maxi) {
    maxi=arr[i];
    ans.push_back(maxi);
    }
    
}
reverse(ans.begin(),ans.end());
      for(int leader:ans){
        cout<<leader<<" ";
      }
    

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

leaders(arr,n);


}