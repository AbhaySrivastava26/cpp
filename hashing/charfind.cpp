#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //precompute  

    //if hes not asking about any upper or lower case character then mention directly 256 and dont need to mention the ch - a it directly store the value at the given index and increments accordingly
 int hash[256]={0};
 for(int i=0;i<s.size();i++){
    hash[s[i]]++;

 }



    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
       //fetch
       cout<<hash[c]<<endl;

    }
}
