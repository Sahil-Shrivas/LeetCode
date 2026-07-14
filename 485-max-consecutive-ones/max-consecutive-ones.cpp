class Solution {
public:
    int fun(vector<int>& nums, int n){
        int count=0, maxCount=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1)
                count++;
            else 
                count=0;
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        return fun(nums, n);
    }
};