class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0;
        int bouquets = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day)
                flowers++;
            else
                flowers = 0;
            if (flowers == k) {
                bouquets++;
                flowers = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
            return -1;
        int lo = bloomDay[0];
        int hi = bloomDay[0];
        // Find minimum and maximum bloom day
        for (int i = 1; i < bloomDay.size(); i++) {
            lo = min(lo, bloomDay[i]);
            hi = max(hi, bloomDay[i]);
        }
        int ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(bloomDay, m, k, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};