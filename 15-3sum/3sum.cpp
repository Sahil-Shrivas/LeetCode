class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {       //TC=O(N^2) 
        sort(nums.begin(), nums.end());
         vector<vector<int>> ans ;
        for (int i = 0 ; i < nums.size()-2 ; i++){
             if (i>0 && nums[i]==nums[i-1]){
                continue ;
            }
            int target = -1 * nums[i] ;
            int a = i+1 ;
            int b = nums.size()-1 ;
            while (a<b){
           
            if(nums[a]+ nums[b] == target ){
                ans.push_back({nums[i],nums[a],nums[b]});
                a++;
                b--;
                while(nums[b]==nums[b+1] && a<b){
                    b--;
                }
                while(nums[a]==nums[a-1] && a<b ){
                    a++;
                }
            }
            else if(nums[a]+ nums[b] > target){
                b--;
            }else
                a++;
            }
        }
        return ans; 
    }
};