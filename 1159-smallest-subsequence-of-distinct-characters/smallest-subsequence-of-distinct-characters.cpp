class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> fun(26);
        vector<bool> visited(26);
        string ans;

        for (char c : s) fun[c - 'a']++;

        for (char c : s) {
            fun[c - 'a']--;
            if (visited[c - 'a']) continue;
            while (!ans.empty() && ans.back() > c && fun[ans.back() - 'a']) {
                visited[ans.back() - 'a'] = 0;
                ans.pop_back();
            }
            ans += c;
            visited[c - 'a'] = 1;
        }
        return ans;
    }
};