class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int ans=0;
        for(auto ch : s){
            if(ch=='('){
                st.push(ch);
            }
            if(ch==')'){
                st.pop();
            }
            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};