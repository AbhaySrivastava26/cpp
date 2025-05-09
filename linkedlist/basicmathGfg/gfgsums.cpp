#include<bits/stdc++.h>
using namespace std;
int divisors(int n){
   int  count=0;
for(int i=1;i<=n;i++){
    if(n%i==0){
count+=i;
    }
}
return count;
}
 int totalsumofdigits(int n){
int total=0;
for(int i=1;i<=n;i++){
    total+=divisors(i);
}
return total;
 }
int main(){
     int n;
     cout<<"the total sum of digits of ";
     cin>>n;
     int output=totalsumofdigits(n);
     cout<<output;

}