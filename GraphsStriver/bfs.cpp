#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
vector<int>adj[N];
vector<int>bfs(int V){
    vector<int>res;
      vector<int>aj(V,0);
 queue<int>q;
 q.push(0);
 aj[0]=1;
 while(!q.empty()){
    int node=q.front();
    q.pop();
    res.push_back(node);
    for(int i:adj[node]){
     if(!aj[i]){
        q.push(i);
        aj[i]=1;
     }
    }
   
 }
    return res;
}
int main(){
    int V=9;
    adj[0]={1,2,4};
    adj[1]={3,2};
    adj[2]={3,6,4};
    adj[3]={6,4};
    adj[4]={6,4,8,9};

    vector<int>res=bfs(V);
    for(int num:res){
        cout<<num<<" ";
    }
}