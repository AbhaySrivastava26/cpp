#include <bits/stdc++.h>
using namespace std;

vector<int> arrays1(int arr[], int n) {
    unordered_map<int, int> mp; // Use unordered_map for counting
    vector<int> ans;            // Dynamic vector to store the result

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
        if (mp[arr[i]] > n / 3) {
            // Add to ans only if the element is not already present
           
                ans.push_back(arr[i]);
           
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = arrays1(arr, n);

    // Print the result
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
