#include<bits/stdc++.h>
using namespace std;


void arrays1(int arr[],int n){
   
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



int arrays(int arr[],int n){
  
arrays1(arr,n);
 int largest=arr[n-1];
   int secondlargest=-1;
    for(int i=n-2;i>=0;i--){
     if(arr[i]!=largest){
        secondlargest=arr[i];
            break;
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
int result=arrays(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
 }
 cout<<"the second largest element in the given array is:" <<result<<" ";
 
 
    
    
}