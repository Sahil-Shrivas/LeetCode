class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> ans;
        for(int i=0; i<variables.size(); i++){
            int n1=1,n2=1;
            for(int j=0; j<variables[i][1]; j++){
                n1=(n1*variables[i][0])%10;
            }
            for(int j=0; j<variables[i][2]; j++){
                n2=(n2*n1)%variables[i][3];
            }
            if(n2==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};