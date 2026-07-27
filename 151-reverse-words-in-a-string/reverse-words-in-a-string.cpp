class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> v;
        string word;

        while (ss >> word) {
            v.push_back(word);
        }
        string ans = "";
        for (int i = v.size()-1; i >= 0; i--) {
            ans = ans + v[i];
            if (i != 0)
                ans = ans + " ";
        }
        return ans;
    }
};