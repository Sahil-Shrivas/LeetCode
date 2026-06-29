class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
       int low=0,high=0;
       int res=INT_MIN;
       unordered_map<char,int> f;
       for(high=0;high<n;high++)
       {
           f[s[high]]++;
           int len=high-low+1;
           while(f.size()<len)
           {
               f[s[low]]--;
               if(f[s[low]] ==0)
               f.erase(s[low]);
               low++;
               len=high-low+1;
           }
           // now equal
           len=high-low+1;
           res=max(res,len);
       }
       if(res==INT_MIN)
       return 0;
       return res;
    }
};