#include <bits/stdc++.h>
using namespace std;

// Function to find two indices such that their sum equals the target
vector<int> twosum(vector<int>& nums, int target) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // Return as soon as the pair is found
            }
        }
    }
    return ans; // Return empty vector if no pair is found
}

int main() {
    int n, target;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> k(n);

    // Input the array elements
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    // Input the target
    cout << "Enter the target sum: ";
    cin >> target;

    // Find the indices
    vector<int> result = twosum(k, target);

    // Output the result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two elements sum to the target." << endl;
    }

    return 0;
}
