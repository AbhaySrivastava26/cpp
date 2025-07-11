// class Solution {
//     public:
//     bool issafe1(int row, int col,vector<string>&board,int n){
//         int duprow=row;
//         int dupcol=col;
//         while(row>=0 && col>=0){
//           if(board[row][col]=='Q') return false;
//           row--;
//           col--;
//         }
//         row=duprow;
//         col=dupcol;
//         while(col>=0){
//             if(board[row][col]=='Q') return false;
//             col--;
//         }
//         row=duprow;
//         col=dupcol;
//         while(row<n && col>=0){
//          if(board[row][col]=='Q') return false;
//          row++;
//          col--;
//         }
//         return true;
//     }
// public:
// void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
//     if(col==n){
//         ans.push_back(board);
//         return ;
//     }
//     for(int row=0;row<n;row++){
//         if(issafe1(row,col,board,n)){
//             board[row][col]='Q';
//             solve(col+1,board,ans,n);
//             board[row][col]='.';

//         }
//     }
// }

// public:
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>>ans;
//         vector<string>board(n);
//         string s(n,'.');
//         for(int i=0;i<n;i++){
//             board[i]=s;
//         }
//       solve(0,board,ans,n);
//       return ans;
//     }
// };

#include<bits/stdc++.h>
using namespace std;

bool issafe(int row,int col, vector<string>&board,int n){
int duprow=row;
int dupcol=col;
while(row>=0 && col>=0){
    if(board[row][col]=='Q') return false;
    row--;
    col--;
}
row=duprow;
col=dupcol;
while(col>=0){
    if(board[row][col]=='Q') return false;
    col--;
}
row=duprow;
col=dupcol;

while(row<n && col>=0){
    if(board[row][col]=='Q') return false;
    row++;
    col--;
}
return true;
}
void solveNQueen(int col,vector<string>&board,vector<vector<string>>&ans,int n){
    if(col==n){
        ans.push_back(board);
        return ;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
               board[row][col]='Q';
               solveNQueen(col+1,board,ans,n);
               board[row][col]='.';
        }
    }

}
int main(){
    int n;
    cout<<"enter n quenes for n grid";
    cin >> n;
    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    solveNQueen(0,board,ans,n);
    int count=1;
    for(auto & it :ans){
        cout<<"Solution"<<count++<<"\n";
        for(string i:it){
            cout<<i<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}

