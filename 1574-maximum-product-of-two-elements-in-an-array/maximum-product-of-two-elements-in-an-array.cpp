class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int n1=nums[n-1]-1;
        int n2=nums[n-2]-1;
        return n1*n2;
    }
};