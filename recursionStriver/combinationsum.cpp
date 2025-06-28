#include <bits/stdc++.h>
using namespace std;

void combinationsumfind(int index, vector<int>& arr, int target, vector<vector<int>>& ans, vector<int>& ds) {
    if (index == arr.size()) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }

    if (arr[index] <= target) {
        ds.push_back(arr[index]);
        combinationsumfind(index, arr, target - arr[index], ans, ds);
        ds.pop_back();
    }

    combinationsumfind(index + 1, arr, target, ans, ds);
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> candidates(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> candidates[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<vector<int>> ans;
    vector<int> ds;

    combinationsumfind(0, candidates, target, ans, ds);

    cout << "Combinations:\n";
    for (auto& combination : ans) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
