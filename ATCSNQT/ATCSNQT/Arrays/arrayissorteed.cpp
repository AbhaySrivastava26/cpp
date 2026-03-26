#include<bits/stdc++.h>
using namespace std;


   
    

bool arrays(int arr[],int n){

  
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
    
}



int main(){

    int n;
   cin>>n;
//    int largest;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 arrays(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
 }
 cout<<endl;
bool result=arrays(arr,n);
 cout<<result<<" ";
 
 
    
    
}