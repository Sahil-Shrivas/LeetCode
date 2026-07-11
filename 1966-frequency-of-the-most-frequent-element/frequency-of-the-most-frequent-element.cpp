class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        long l=0, r=0;
        long total=0, result=0;

        while(r<n){
            total=total+nums[r];
            while((nums[r]*(r-l+1)) > (total+k)){
                total=total-nums[l];
                l++;
            }
            result=max(result,(r-l+1));
            r++;
        }
        return result;
    }
};