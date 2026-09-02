class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int hasOdd = false;
        int hasEven = false;

        for(int i=0; i<nums1.size(); i++){
            if(i%2 == 0){
                hasEven = true;
            }else{
                hasOdd = true;
            }
        }

        if(hasEven && !hasOdd){
            return true;
        }
        if(hasOdd && !hasEven){
            return true;
        }
        if(hasOdd && hasEven){
            return true;
        }

        return false;
    }
};