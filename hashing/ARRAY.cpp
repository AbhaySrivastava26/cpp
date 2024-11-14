#include<bits/stdc++.h>
using namespace std;

int countArrayvalues(int n,int arr[],int num){
 int count=0;
 for(int i=0;i<n;i++){
    if(arr[i]==num){
        count+=1;
    }
 }
return count;

}

int main(){
    int arr[10],n;
   cout<<"enter size of the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int q,num;
cin>>q;
cout<<"enter the elements for searching ";
while(q--){
    int num;
    cin>>num;
    int result=countArrayvalues(n,arr,num);
cout<<"The total number of "<<num<<"in the array are :"<<result;
}
}