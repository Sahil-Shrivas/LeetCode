class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for(int i=1; i<nums.size(); i++){
            // nums = [1,2,3,2,5]
            if(nums[i] == nums[i-1]+1)
                sum=sum+nums[i];    //3,6
            else 
                break;
        }
        unordered_set<int> s(nums.begin(), nums.end());
        while(s.count(sum))
            sum++;
        return sum;
    }
};