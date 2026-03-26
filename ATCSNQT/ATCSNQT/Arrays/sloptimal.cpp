#include<bits/stdc++.h>
using namespace std;


int arrays1(int arr[],int n){
   int largest=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>largest){
        largest=arr[i];
       }
   }

    // int largest;
 int secondlargest=-1;
 for(int i=0;i<n;i++){
    if(arr[i]>secondlargest && arr[i]!=largest){
        secondlargest=arr[i];
    }
 }
 return secondlargest;
}





int main(){

    int n;
   cin>>n;
//    int largest;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//  arrays(arr,n);

 cout<<endl;

 for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
 }
 int result=arrays1(arr,n);
 cout<<endl;
 cout<<"the second largest element in the given array is:" <<result<<" ";
 
 
    
    
}