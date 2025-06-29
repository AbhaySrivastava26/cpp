#include<bits/stdc++.h>
 using namespace std;

int reverseStack(stack<int>&st){
if(st.empty()) return ;
int top=st.top();
st.pop();
reverseStack(st);
// while()

}
 int main(){
stack<int>st={4,6,3,2,545};
int res=reverseStack(st);
cout<<res;
 }