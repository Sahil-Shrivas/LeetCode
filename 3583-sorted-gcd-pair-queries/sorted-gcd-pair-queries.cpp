class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        vector<long long> count(mx + 1, 0);
        for (int g = 1; g <= mx; g++) {
            for (int multiple = g; multiple <= mx; multiple += g) {
                count[g] += freq[multiple];
            }
        }

        vector<long long> exact(mx + 1, 0);
        for (int g = mx; g >= 1; g--) {
            exact[g] = count[g] * (count[g] - 1) / 2;

            for (int multiple = g * 2; multiple <= mx; multiple += g) {
                exact[g] -= exact[multiple];
            }
        }

        vector<long long> prefix(mx + 1, 0);
        for (int g = 1; g <= mx; g++) {
            prefix[g] = prefix[g - 1] + exact[g];
        }

        vector<int> ans;
        for (long long q : queries) {
            long long target = q + 1;

            int l = 1, r = mx;
            while (l < r) {
                int mid = l + (r-l) / 2;

                if (prefix[mid] >= target)
                    r = mid;
                else
                    l = mid + 1;
            }

            ans.push_back(l);
        }
        return ans;
    }
};