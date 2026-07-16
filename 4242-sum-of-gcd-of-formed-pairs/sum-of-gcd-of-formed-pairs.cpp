class Solution {
public:
    long long fun(vector<int>& nums, int n){
        int mx=0;
        for(int i=0; i<n; i++){
            mx=max((nums[i]), mx);
            nums[i]=gcd(mx, nums[i]);
        }

        sort(nums.begin(), nums.end());
        int low=0, high=n-1;
        long long result=0;
        while(low<high){
            result += gcd(nums[low], nums[high]);
            low++;
            high--;
        }
        return result;
    }
    
    long long gcdSum(vector<int>& nums) {
        long long n = nums.size();
        return fun(nums, n);
    }
};