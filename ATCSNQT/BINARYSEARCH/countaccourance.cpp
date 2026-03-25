#include <bits/stdc++.h>

using namespace std;

// Function to find the first occurrence of key
int findFirstOccurrence(int n, int key, vector<int>& v) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == key) {
            res = mid;
            high = mid - 1; // Move to the left part to find the first occurrence
        } else if (key < v[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}

// Function to find the last occurrence of key
int findLastOccurrence(int n, int key, vector<int>& v) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == key) {
            res = mid;
            low = mid + 1; // Move to the right part to find the last occurrence
        } else if (key < v[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}

// Function to find the first and last position of a key
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = findFirstOccurrence(n, k, arr);
    if (first == -1)
        return {-1, -1};
    int last = findLastOccurrence(n, k, arr);
    return {first, last};
}

// Function to count occurrences of a key
int count(vector<int>& arr, int n, int x) {
    pair<int, int> anss = firstAndLastPosition(arr, n, x);
    if (anss.first == -1) return 0;
    return anss.second - anss.first + 1;
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    // Find first and last occurrences
    pair<int, int> result = firstAndLastPosition(v, n, key);

    // Output the results
    cout << "First Occurrence: " << result.first << "\n";
    cout << "Last Occurrence: " << result.second << "\n";

    // Count occurrences
    int countResult = count(v, n, key);
    cout << "Count of key: " << countResult << "\n";

    return 0;
}
