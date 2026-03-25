// #include <bits/stdc++.h>
// using namespace std;

// void AllPossiblePermutation(vector<int>& nums, vector<vector<int>>& ans, vector<int>& vc, int n, int freq[]) {
//     if (vc.size() == n) {
//         ans.push_back(vc);
//         return;
//     }
//     for (int i = 0; i < n; i++) {
//         if (!freq[i]) {
//             vc.push_back(nums[i]);
//             freq[i] = 1;
//             AllPossiblePermutation(nums, ans, vc, n, freq);
//             freq[i] = 0;
//             vc.pop_back();
//         }
//     }
// }

// vector<vector<int>> permute(vector<int>& nums) {
//     vector<vector<int>> ans;
//     int n = nums.size();
//     int freq[n];
//     for (int i = 0; i < n; i++) freq[i] = 0;
//     vector<int> vc;
//     AllPossiblePermutation(nums, ans, vc, n, freq);
//     return ans;
// }

// int main() {
//     vector<int> nums = {1, 2, 3};
//     vector<vector<int>> result = permute(nums);

//     cout << "All permutations:\n";
//     for (auto& vec : result) {
//         for (int num : vec)
//             cout << num << " ";
//         cout << endl;
//     }

//     return 0;
// }
/*
 this was a brute force appraoch using map
 
 */
#include <bits/stdc++.h>
using namespace std;

void AllPossiblePermutation(int index, vector<int>& nums, vector<vector<int>>& ans, int n) {
    if (index == n) {
        ans.push_back(nums);  // store current permutation
        return;
    }
    for (int i = index; i < n; i++) {
        swap(nums[index], nums[i]);                        // place ith element at index
        AllPossiblePermutation(index + 1, nums, ans, n);   // recurse
        swap(nums[index], nums[i]);                        // backtrack
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    AllPossiblePermutation(0, nums, ans, n);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = permute(nums);

    cout << "All permutations:\n";
    for (auto& vec : result) {
        for (int num : vec)
            cout << num << " ";
        cout << endl;
    }

    return 0;
} 

//this is a optimal approach without map 
