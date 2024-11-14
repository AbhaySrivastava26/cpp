#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(){
    int n;
   if(n) return ;
   cnt+=1;
   cout<<cnt<<endl;
print();
}


//printing n times a name 
void name(int i,int n){
if(i>n) return ;
cout<<n<<endl;
name(i,n-i);
}


void name1(int i,int n){
if(i<1) return ;
    name1(i-1,n);
    cout<<i<<endl;
}
void name2(int i,int n){
    if(i>n) return ;
    name1(i+1,n);
    cout<<i<<endl;
}
//printing n digit
int name3(int n){

    if(n==0) return 0;
 return n + name3(n-1);
}

int name4(int n){

    if(n==0) return 1;
 return n * name4(n-1);
}
int main(){
int n;
cin>>n;

  int result= name4(n);
  cout<<result;
    return 0;
}