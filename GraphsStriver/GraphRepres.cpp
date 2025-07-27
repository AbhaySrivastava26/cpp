// #include<bits/stdc++.h>
// using namespace std;

/////////////////////////





//ADJACENCYYYYYYYYYYYYYY MATRIXXXXXXXXXXXXXXXX
// int main(){
//     int n,m;
//     cout<<"Enter n and M values";
//     cin >> n>>m;
//     int adj[n+1][n+1];
//     cout<<"enter graph values";
//      for(int i = 0; i <= n; i++) {
//         for(int j = 0; j <= n; j++) {
//             adj[i][j] = 0;
//         }
//     }
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v]=1;
//         adj[v][u]=1;
//     }
//     for (int i = 1; i <= n; i++) {  // we usually print from 1 to n
//         for (int j = 1; j <= n; j++) {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//ADJACENCYYYY LISTTTTTTTTTTTTTTTTT
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n>>m;
   vector<int>adj[n+1];
   for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
    return 0;
}