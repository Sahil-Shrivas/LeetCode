class Solution {
public:
    int minimumPushes(string word) {
        vector<int> f(26,0);
        for(char c:word) f[c-'a']++;
        sort(f.begin(),f.end(),greater<int>());
        int ans=0;
        for(int i=0;i<26;i++){
            if(f[i]==0) break;
            ans+=f[i]*((i/8)+1);
        }
        return ans;
    }
};