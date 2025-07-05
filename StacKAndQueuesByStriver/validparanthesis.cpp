#include<bits/stdc++.h>
using namespace std;
bool validparanthesis(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }else{
            if(st.empty()) return false;
            char top=st.top();
            if((top=='(' && ch==')') || top=='{' && ch=='}' || top=='[' && ch==']') {
                st.pop();
            }else{
                return false;
            }
        }
        
    }
    return  st.empty();
}
int main(){
  string s="()[{}()]";

 bool p= validparanthesis(s);
cout<<p<<" ";
    return 0;
}