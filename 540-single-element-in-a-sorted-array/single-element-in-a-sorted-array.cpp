class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];

        int st=0, end=n-1;
        while(st <= end){
            int mid=st+(end-st)/2;

            if(mid==0 && nums[0] != nums[1]) return nums[mid];
            if(mid==n-1 && nums[n-1] != nums[n-2]) return nums[mid];

            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];
            if(mid%2 == 0){     //even
                if(nums[mid-1] == nums[mid]){    //left
                    end=mid-1;    
                }else {              //right
                    st=mid+1;
                }
            }else {                  //odd
                if(nums[mid-1] == nums[mid]){    //right
                    st=mid+1;
                }else {         //left
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};