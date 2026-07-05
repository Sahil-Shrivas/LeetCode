class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j])
                ans.push_back(nums1[i++]);
            else
                ans.push_back(nums2[j++]);
        }
        while (i < nums1.size())
            ans.push_back(nums1[i++]);
        while (j < nums2.size())
            ans.push_back(nums2[j++]);
        int n = ans.size();
        if (n % 2 == 1)
            return ans[n / 2];
        return (ans[n / 2] + ans[n / 2 - 1]) / 2.0;
    }
};