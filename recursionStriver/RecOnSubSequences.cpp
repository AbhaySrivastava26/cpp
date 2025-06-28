#include <bits/stdc++.h>

using namespace std;


void printSub(int index,int arr[],vector<int>&ds ,int n){
if(index==n) {
   
    for(auto it:ds){
        cout<<it<<" ";
    }
    if(ds.size()==0) cout<<"{}";
    cout<<endl;
    return ;
}
ds.push_back(arr[index]);
printSub(index+1,arr,ds,n);
ds.pop_back();
printSub(index+1,arr,ds,n);
}

void printSubsequenceWhoseSumisK(int index,vector<int>&ds, int s,int sum,int  arr[],int n){
if(index==n) {
    if(s==sum){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return ;
}
ds.push_back(arr[index]);
s+=arr[index];
printSubsequenceWhoseSumisK(index+1,ds,s,sum,arr,n);
s-=arr[index];
ds.pop_back();
printSubsequenceWhoseSumisK(index+1,ds,s,sum,arr,n);

}
bool  printSubsequenceWhoseSumisKk(int index,vector<int>&ds, int s,int sum,int  arr[],int n){
if(index==n) {
    if(s==sum){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return true;
    }
    else return false ;
}
ds.push_back(arr[index]);
s+=arr[index];
 if(printSubsequenceWhoseSumisKk(index+1,ds,s,sum,arr,n)==true){
    return true;
 }
s-=arr[index];
ds.pop_back();
if(printSubsequenceWhoseSumisKk(index+1,ds,s,sum,arr,n)==true){
    return true;
}
return false;

}

int  printSubsequenceCount(int index, int s,int sum,int  arr[],int n){
if(index==n) {
    if(s==sum){
        return 1;
    }
    else return 0 ;
}
// ds.push_back(arr[index]);
s+=arr[index];
 int left=printSubsequenceCount(index+1,s,sum,arr,n);
  
 
s-=arr[index];
// ds.pop_back();
int right=printSubsequenceCount(index+1,s,sum,arr,n);
    return left+right;
}



int main() {
    
int arr[]={1,2,1};
int n=3;
int sum=2;
vector<int>ds;
// printSub(0,arr,ds,n);
int cnt=printSubsequenceCount(0,0, sum,arr,n);
cout<<cnt;
    return 0;
}