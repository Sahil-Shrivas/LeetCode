class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;

        int l = 0;
        long long product = 1;
        int ans = 0;
        for (int r = 0; r < nums.size(); r++) {
            product = product * nums[r];
            while (product >= k) {
                product /= nums[l];
                l++;
            }
            ans += (r - l + 1);
        }
        return ans;
    }
};
