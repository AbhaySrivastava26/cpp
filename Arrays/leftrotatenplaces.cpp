#include<bits/stdc++.h>
using namespace std;




void leftrotate(int arr[],int n,int d) {


d=d%n;
int temp[n];
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}

for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
}



}

int main(){

int n,d;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>d;
leftrotate(arr,n,d);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}