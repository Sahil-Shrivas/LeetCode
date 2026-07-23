class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int open = 0;

        for(char ch : s){
            if(ch == '('){
                if(open > 0)
                    ans = ans + ch;
                open++;
            }
            else{
                open--;
                if(open > 0)
                    ans = ans + ch;
            }
        }
        return ans;
    }
};