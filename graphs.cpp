#include<bits/stdc++.h>
using namespace std;

vector<int> bfstraversel(vector<vector<int>>&adj,int n){
queue<int>q;
vector<int>vis(n,0);
q.push(0);
vis[0]=1;
vector<int>ans;
while(!q.empty()){
    int node=q.front();
    q.pop();
    ans.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            vis[it]=1;
            q.push(it);
        }
    }

}
return ans;
}

void dfs(vector<vector<int>>&adj,int n,int node,vector<int>&vis,vector<int>&ans){
// vector<int>vis(n,0);
vis[node]=1;
ans.push_back(node);
for(auto it:adj[node]){
    if(!vis[it]){
        dfs(adj,n,it,vis,ans);
    }
}
}
// return ans;

int rottenoranges(vector<vector<int>>&grid){
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<pair<int,int>,int>>q;
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;
            }
        }
    }
    int tim=0;
    int drow[4] = {-1,0,1,0};
    int dcol[4] = {0,1,0,-1};
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int r=it.first.first;
        int c=it.first.second;
        int t=it.second;
        tim=max(tim,t);
        for(int i=0;i<4;i++){
         int nrow=r+drow[i];
         int ncol=c+dcol[i];
         if(nrow>=0 && nrow<n &&ncol>=0 && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
            q.push({{nrow,ncol},t+1});
            vis[nrow][ncol]=2;
         }
        }
    }
   for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1 && vis[i][j] != 2){
                return -1;
            }
        }
    }



return tim;

}
int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int>ans;
//     // vector<int>vis;
//     vector<vector<int>>adj(n);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);

//     }
    
//     vector<int>vis(n,0);
//     // vis[0]=1;
// dfs(adj,n,0,vis,ans);
//     for(int it:ans){
//         cout<<it<<" ";
//     }
 int n,m;
    cin>>n>>m;

    vector<vector<int>> grid(n, vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
   int ans= rottenoranges(grid);

   cout<<ans<<endl;

}