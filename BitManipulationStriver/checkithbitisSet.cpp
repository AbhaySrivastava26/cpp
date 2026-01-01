#include<bits/stdc++.h>
using namespace std;
string covnumtobin(int n){
    string res="";
    while(n>0){
        if(n%2!=0) res+="1";
        else res+="0";
        n/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int n,k;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<endl<<"enter k"<<endl;
    cin>>k;
//     string ress=covnumtobin( n);
//     cout<<"binary of res"<<ress<<endl;
//     int len=ress.size();
// if (k < len && ress[len - 1 - k] == '1')
//         cout << "Bit " << k << " is SET (1)";
//     else
//         cout << "Bit " << k << " is NOT SET (0)";
//     return false;
// if(n&  (1<<k)!=0){
if((n>>k) & 1==0){
    cout<<"the bit is not set ";
}else{
    cout<<" set ";
}
}