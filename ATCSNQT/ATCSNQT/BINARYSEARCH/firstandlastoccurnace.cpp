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
    int firstOccurrence = findFirstOccurrence(n, key, v);
    int lastOccurrence = findLastOccurrence(n, key, v);

    // Output the results
    cout << "First Occurrence: " << firstOccurrence << "\n";
    cout << "Last Occurrence: " << lastOccurrence << "\n";

    return 0;
}
