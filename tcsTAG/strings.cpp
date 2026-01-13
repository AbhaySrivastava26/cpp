#include<bits/stdc++.h>
using namespace std;
string camel(string &s){
    string ans="";
    bool is=false;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
          is=true;
            
        }
        else if(is==true){
            ans+=toupper(s[i]);
            is=false;
        }
        else{
            ans+=s[i];
        }

    }
    return ans;
}

int main(){
    string s;
    // cin>>s;
    getline(cin,s);

    string ans=camel(s);
    cout<<ans;
}