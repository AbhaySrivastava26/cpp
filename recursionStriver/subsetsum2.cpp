    #include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void subsetsum(int index, vector<int>& nums, vector<int>& vc, vector<vector<int>>& ans, int n) {
        ans.push_back(vc);  // Push the current subset

        for (int i = index; i < n; i++) {
            if (i > index && nums[i] == nums[i - 1]) continue;  // Skip duplicates

            vc.push_back(nums[i]);
            subsetsum(i + 1, nums, vc, ans, n);
            vc.pop_back();  // Backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Group duplicates
        vector<vector<int>> ans;
        vector<int> vc;
        subsetsum(0, nums, vc, ans, nums.size());
        return ans;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = sol.subsetsWithDup(nums);

    cout << "Unique subsets are:\n";
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
