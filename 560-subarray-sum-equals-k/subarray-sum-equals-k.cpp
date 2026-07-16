class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int ,int> map;
        int sum=0, ans=0;
        map[sum] = 1;
        for(auto it : nums){
            sum+= it;
            int find = sum-k;
            if(map.find(find) != map.end()){
                ans+=map[find];
            }
            map[sum]++;
        }
        return ans;
    }
};