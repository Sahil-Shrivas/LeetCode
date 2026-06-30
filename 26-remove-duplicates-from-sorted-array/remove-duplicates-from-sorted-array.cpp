class Solution {
public:
    int removeDuplicates(vector<int>& nums) {       // TC=O(N) SC=O(1)
        int officer = 0;
        int unique = 1;
        int cm = 1;
        int num = nums.size();
        while(cm<num){
            if (nums[cm] == nums[cm-1]){
                cm++;
                continue;
            }
            nums[officer+1] = nums[cm];
            officer++;
            unique++;
            cm++;
        }
        return {unique};
    }
};