#include<bits/stdc++.h>
using namespace std;
int longestsubarraysumk(vector<int>&nums,int k){
    // [1,2,3,1,2,9,3,0,10,1,1,1,1,5,44] k=19
    int maxi=0;
    for(int i=0;i<nums.size();i++){

        int ans=0;
        for(int j=i;j<nums.size();j++){
            ans+=nums[j] ;
            if(ans==k){
                maxi=max(maxi,j-i+1);
            }
        }
    }
    return maxi;
}

// dfsUtil(int node, vector<vector<int>> &adj, vector<int> &ans, vector<int> &vis) {
//     vis[node] = 1;
//     ans.push_back(node);
    
//     for (auto it : adj[node]) {
//         if (!vis[it]) {
//             dfsUtil(it, adj, ans, vis);
//         }
//     }
// }

// vector<int> dfsTraversal(vector<vector<int>> &adj) {
//     int V = adj.size();
//     vector<int> ans;
//     vector<int> vis(V, 0);
//     dfsUtil(0, adj, ans, vis);
//     return ans;
// }

vector<int>dfstravel(vector<vector<int>>&adj){
int v=
}
int main(){

    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=longestsubarraysumk(nums,k);
    cout<<ans;
}