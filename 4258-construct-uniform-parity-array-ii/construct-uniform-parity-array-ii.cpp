class Solution {
public:
    bool uniformArray(vector<int>& nums1){
        int minOdd = INT_MAX;
        int minEven = INT_MAX;

        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i] % 2 != 0) {
                minOdd = min(minOdd, nums1[i]);
            }
            else {
                minEven = min(minEven, nums1[i]);
            }
        }

        if(minOdd == INT_MAX) {
            return true;
        }

        if(minEven == INT_MAX) {
            return true;
        }
        if(minOdd < minEven) {
            return true;
        }

        return false;
    }
};