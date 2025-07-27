#include <bits/stdc++.h>
using namespace std;

void dfsUtil(int node, vector<vector<int>> &adj, vector<int> &ans, vector<int> &vis) {
    vis[node] = 1;
    ans.push_back(node);
    
    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfsUtil(it, adj, ans, vis);
        }
    }
}

vector<int> dfsTraversal(vector<vector<int>> &adj) {
    int V = adj.size();
    vector<int> ans;
    vector<int> vis(V, 0);
    dfsUtil(0, adj, ans, vis);
    return ans;
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    // Sample undirected graph
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    vector<int> result = dfsTraversal(adj);

    cout << "DFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
