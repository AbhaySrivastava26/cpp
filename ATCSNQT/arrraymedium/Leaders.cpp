#include<bits/stdc++.h>


using namespace std;

int  leaders(int arr[],int n){

       vector<int>ans;
       for(int i=0;i<n;i++){
         bool leader=true;
           for(int j=i+1;j<n;j++){
               if(arr[i]<=arr[j]){
              leader=false;
              break;
               }
           }
           if(leader==true){
            ans.push_back(arr[i]);
           }
       }
       for(int leader:ans){
        cout<<leader<<" ";
       }
    
    

}
int main(){
int n,k;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}


int result=leaders(arr,n);



}