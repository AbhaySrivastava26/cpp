#include<bits/stdc++.h>
using namespace std;

void combinationsumfind(int index, vector<int>& arr, int target, set<vector<int>>& ans, vector<int>& ds) {
    if (index == arr.size()) {
        if (target == 0) {
            ans.insert(ds);
        }
        return;
    }

    if (arr[index] <= target) {
        ds.push_back(arr[index]);
        combinationsumfind(index + 1, arr, target - arr[index], ans, ds);
        ds.pop_back();
    }

    combinationsumfind(index + 1, arr, target, ans, ds);
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> candidates(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> candidates[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    sort(candidates.begin(), candidates.end());

    set<vector<int>> ans_set;
    vector<int> ds;

    combinationsumfind(0, candidates, target, ans_set, ds);

    // Convert set to vector<vector<int>>
    vector<vector<int>> result(ans_set.begin(), ans_set.end());

    cout << "\nUnique combinations that sum to " << target << ":\n";
    for (auto& comb : result) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
