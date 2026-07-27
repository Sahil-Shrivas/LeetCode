class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        int currMax = nums[0];
        for(int i=1; i<nums.size(); i++){
            ans = max(ans, (currMax-1) * (nums[i]-1));
            currMax = max(currMax, nums[i]);
        }
        return ans;
    }
};