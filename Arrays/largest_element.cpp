#include<bits/stdc++.h>
using namespace std;

void arrays(int arr[],int n){
   
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                   int temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
                   
        }
    }
   
}


}
int largest(int arr[],int n){

  
        arrays(arr,n);
       return arr[n-1];
       
    

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
int result=largest(arr,n);
 cout<<"the largest element in the given array is:" <<result<<" ";
 
 
    
    
}