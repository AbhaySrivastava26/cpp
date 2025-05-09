#include<bits/stdc++.h>
using namespace std;

void mergesortedarray(vector<int>&vec1,int n,vector<int>&vec2,int m){
vector<int>ans;
for(int i=0;i<n;i++){
vec1.push_back(vec1[i]);
}
for(int i=0;i<m;i++){
    vec1.push_back(vec2[i]);
}




}

int main(){
int n;
cin>>n;
vector<int>vec1(n);
for(int i=0;i<n;i++){
    cin>>vec1[i];
}



int m;
cin>>m;
vector<int>vec2(m);
for(int i=0;i<n;i++){
    cin>>vec2[i];
}

mergesortedarray(vec1,n,vec2,m);
}