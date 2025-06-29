#include<bits/stdc++.h>
using namespace std;
void reversee(string& str,  int idx){
    if(idx>=str.size()){
        return ;
    }
    reversee( str,idx+1);
    cout<<str[idx];
}
    int main(){
        // int n;
        // cin>>n;

        // cin.ignore();
        // vector<string>strings(n);
        // for(int i=0;i<strings.size();i++){
        //     getline(cin,strings[i]);
        // }
        string strings;
        getline(cin,strings);
// string s ="abc";

reversee(strings,0);
return 0;

}