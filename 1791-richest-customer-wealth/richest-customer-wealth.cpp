class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;

        for(int i=0; i<accounts.size(); i++){
            int wealth_sum=0;
            for(int j=0; j<accounts[i].size(); j++){
                wealth_sum = wealth_sum + accounts[i][j];
            }
            ans = max(ans,wealth_sum);
        }
        return ans;
    }
};