// smallest_divisor.cpp
// Compile: g++ -std=c++17 -O2 -Wall -Wextra smallest_divisor.cpp -o smallest_divisor
// Run:     ./smallest_divisor
//
// Reads:
//   n                (size of the array)
//   n integers       (the nums array)
//   threshold        (integer)
// Prints:
//   the smallest divisor

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Return the maximum element in nums
    int Maxii(const vector<int>& nums) {
        int maxi = INT_MIN;
        for (int x : nums) maxi = max(maxi, x);
        return maxi;
    }

    // True if dividing every element by j (with ceiling) keeps the sum ≤ threshold
    bool IsPossible(const vector<int>& nums, int j, int threshold) {
        long long sum = 0;                       // use 64‑bit to avoid overflow
        for (int x : nums) {
            sum += static_cast<int>(ceil((double)x / j));
            if (sum > threshold) return false;   // early exit
        }
        return sum <= threshold;
    }

    // Binary‑search the smallest divisor
    int smallestDivisor(const vector<int>& nums, int threshold) {
        int low = 1;
        int high = Maxii(nums);                  // upper bound = max(nums)
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (IsPossible(nums, mid, threshold))
                high = mid - 1;                  // try to tighten
            else
                low = mid + 1;                   // need a bigger divisor
        }
        return low;                              // smallest valid divisor
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Enter n: ";
    if (!(cin >> n) || n <= 0) {
        cerr << "Invalid n\n";
        return 1;
    }

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) cin >> nums[i];

    int threshold;
    cout << "Enter threshold: ";
    cin >> threshold;

    Solution sol;
    int ans = sol.smallestDivisor(nums, threshold);
    cout << "Smallest divisor = " << ans << '\n';
    return 0;
}
