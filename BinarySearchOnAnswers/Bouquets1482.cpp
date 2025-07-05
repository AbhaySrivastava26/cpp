#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Maxii(vector<int>& bloomDay) {
        int maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++) {
            maxi = max(maxi, bloomDay[i]);
        }
        return maxi;
    }

    int Minii(vector<int>& bloomDay) {
        int mini = INT_MAX;
        for (int i = 0; i < bloomDay.size(); i++) {
            mini = min(mini, bloomDay[i]);
        }
        return mini;
    }

    bool isPossible(vector<int>& bloomDay, int days, int m, int k) {
        int count = 0;
        int totaldays = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= days) {
                count++;
            } else {
                totaldays += count / k;
                count = 0;
            }
        }
        totaldays += count / k;
        return totaldays >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if (m * k > bloomDay.size()) return -1;
        int maxi = Maxii(bloomDay);
        int mini = Minii(bloomDay);
        for (int i = mini; i <= maxi; i++) {
            if (isPossible(bloomDay, i, m, k)) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    int n, m, k;
    cout << "Enter number of flowers, bouquets needed, flowers per bouquet:\n";
    cin >> n >> m >> k;

    vector<int> bloomDay(n);
    cout << "Enter bloom days:\n";
    for (int i = 0; i < n; ++i) {
        cin >> bloomDay[i];
    }

    Solution sol;
    int result = sol.minDays(bloomDay, m, k);
    cout << "Minimum number of days: " << result << endl;

    return 0;
}