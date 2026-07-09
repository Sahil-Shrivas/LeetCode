class Solution {
public:
    bool fun(string &s, int i){
        int n = s.size();
        if(i >= n/2)
            return true;
        if(s[i] != s[n-i-1])
            return false;
        return fun(s, i+1);
    }
    bool isPalindrome(string s) {
        string t = "";
        for(char c : s){
            if(isalnum(c)){
                t += tolower(c);
            }
        }
        return fun(t,0);
    }
};