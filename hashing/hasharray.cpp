#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
   
   cout<<"enter size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    //precompute using hash fuction
    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
int q;
cin>>q;
cout<<"enter the elements for searching ";
while(q--){
    int num;
    cin>>num;
    //fetch data
    cout<<hash[num]<<endl;
 


}
return 0;
}