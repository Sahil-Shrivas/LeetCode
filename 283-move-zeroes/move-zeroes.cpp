class Solution {
public:
    void fun(vector<int>& nums, int n){
        int left=0;
        for(int right=0; right<n; right++){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
        }
    }
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        fun(nums, n);
    }
};