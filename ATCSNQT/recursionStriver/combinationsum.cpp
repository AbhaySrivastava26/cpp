// #include <bits/stdc++.h>
// using namespace std;

// void combinationsumfind(int index, vector<int>& arr, int target, vector<vector<int>>& ans, vector<int>& ds) {
//     if (index == arr.size()) {
//         if (target == 0) {
//             ans.push_back(ds);
//         }
//         return;
//     }

//     if (arr[index] <= target) {
//         ds.push_back(arr[index]);
//         combinationsumfind(index, arr, target - arr[index], ans, ds);
//         ds.pop_back();
//     }

//     combinationsumfind(index + 1, arr, target, ans, ds);
// }

// int main() {
//     int n, target;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> candidates(n);
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> candidates[i];
//     }

//     cout << "Enter target: ";
//     cin >> target;

//     vector<vector<int>> ans;
//     vector<int> ds;

//     combinationsumfind(0, candidates, target, ans, ds);

//     cout << "Combinations:\n";
//     for (auto& combination : ans) {
//         for (int num : combination) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void combinationsum(int index,int target,vector<vector<int>>&ans,
    vector<int>&vc,vector<int>candidates,int n){
            if(target==0) {
                ans.push_back(vc);
                return;
            }
            for(int i=index;i<candidates.size();i++){
              if(i>index && candidates[i]==candidates[i-1]) continue;
              if(candidates[i]>target) break;
              vc.push_back(candidates[i]);
              combinationsum(i+1,target-candidates[i],ans,vc,candidates,n);
              vc.pop_back();
            }
}
int main(){
    int n;
    cout<<"enter n";
    cin >> n;
    vector<int>candidates(n);
    cout<<"enter candidates values";
    for(int i=0;i<n;i++){
        cin>>candidates[i];
    }
    int target;
    cout<<"enter target value";
    cin>>target;
    vector<vector<int>>ans;
    vector<int>vc;

    sort(candidates.begin(),candidates.end());
    combinationsum(0,target,ans,vc,candidates,n);

 for(auto &it:ans){
    for(int i:it){
        cout<<i<<" ";
    }
    cout<<endl;
 }

    return 0;
}