class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> map;
        
        for(int i=0; i<n; i++){
            map[nums[i]];
        }
        for(int i=nums[0]; i<=nums[n-1]; i++){
            if(map.find(i) == map.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};