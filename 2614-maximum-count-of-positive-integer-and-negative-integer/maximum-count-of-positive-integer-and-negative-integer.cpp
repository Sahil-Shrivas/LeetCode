class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int lo=0, hi=n-1;

        while (lo <= hi) {
            int mid = lo+(hi-lo)/2;
            if (nums[mid]>=0)
                hi = mid-1;
            else
                lo = mid+1;
        }

        int neg = lo;
        // Reset pointers
        lo = 0;
        hi = n-1;
        while (lo <= hi) {
            int mid = lo+(hi-lo)/2;
            if (nums[mid]>0)
                hi = mid-1;
            else
                lo = mid+1;
        }

        int pos = n-lo;
        return max(pos, neg);
    }
};