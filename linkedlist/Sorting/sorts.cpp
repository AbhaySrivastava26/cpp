#include<bits/stdc++.h>
using namespace std;


void SelectionSort(int arr[],int n){
   
    for(int i=0;i<n;i++){
       int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}


void bubblesort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int swapnum=0;
        for(int j=0;j<=i-1;j++)
{
    
    if(arr[j]>arr[j+1]){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
        swapnum=1;
    }
}  

if(swapnum==0){
    break;
}  
cout<<"runs\n";
}
}

void insertionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
       int  j=i;
        while((j>0) && arr[j-1]>arr[j]){
  int temp=arr[j-1];
  arr[j-1]=arr[j];
  arr[j]=temp;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}