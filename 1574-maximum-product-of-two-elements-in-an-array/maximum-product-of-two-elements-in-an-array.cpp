class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n1=nums[nums.size() - 1]-1;
        int n2=nums[nums.size() - 2]-1;
        return n1*n2;
    }
};