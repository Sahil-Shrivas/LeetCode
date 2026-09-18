class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(2*n);
        for(int i=0; i<2*n; i++){
            if(i%2 == 0){
                res[i] = nums[i/2];
            }else{
                res[i]=nums[n+i/2];
            }
        }
        return res;
    }
};

