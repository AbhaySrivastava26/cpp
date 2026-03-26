#include<bits/stdc++.h>
using namespace std;

void bfs(int row,int col,vector<vector<int>>&vs,vector<vector<int>>&grid){
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<int,int>>q;//{{r,c}}
    q.push({row,col});
    vs[row][col]=1;
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        for(int delrow=-1;delrow<=1;delrow++){
            for(int delcol=-1;delcol<=1;delcol++){
                if (delrow == 0 && delcol == 0) continue;
                 int nrow=r+delrow;
                 int ncol=c+delcol;

                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vs[nrow][ncol]!=1 && 
                    grid[nrow][ncol]==1){
                        q.push({nrow,ncol});
                        vs[nrow][ncol]=1;

                    }
            }
        }
    }
}

int numberofIsland(vector<vector<int>>&grid){
    int n=grid.size();
    int m=grid[0].size();
    int cnt=0;
    vector<vector<int>>vs(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vs[i][j]&&grid[i][j]==1){
                bfs(i,j,vs,grid);
                cnt++;
            }
        }
    }
    return cnt;

}

int main(){
    int n,m;
    cin >> n>>m;
    vector<vector<int>>grid(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    cout<<numberofIsland(grid);

    return 0;
}