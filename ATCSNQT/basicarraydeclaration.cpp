#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     // int x;
    //     cin>>arr[i];
    // }
   //nested loop matrix printing and taking options 
   int m;
   cin>>n>>m;
   vector<vector<int>>mat(n,vector<int>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
    }
   }
   cout<<"matrix elements are "<<" :";
   cout<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<mat[i][j]<<"";
    }
    cout<<endl;
   }
}
