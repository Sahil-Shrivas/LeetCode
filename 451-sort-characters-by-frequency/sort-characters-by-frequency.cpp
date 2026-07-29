class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            if (mp[a] == mp[b])
                return a < b;

            return mp[a] > mp[b];
        });
        return s;
    }
};