#include<bits/stdc++.h>


using namespace std;

int  longest(int arr[],int k,int n){

int len=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
        

         s=s+arr[j];
if(s==k){
    len=max(len,j-i+1);
}
        }
    }
    return len;
}
int main(){
int n,k;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cin>>k;
int result=longest(arr,k,n);
cout<<"total"<<result;


}