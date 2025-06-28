#include<bits/stdc++.h>
using namespace std;


void printnames(int i,int n){
   
if(i>n) return;
cout<<"ABHAY"<<endl;
printnames(i+1,n);

}

int main(){
      int n;
      cin>>n;
     printnames(1,n);

    }

