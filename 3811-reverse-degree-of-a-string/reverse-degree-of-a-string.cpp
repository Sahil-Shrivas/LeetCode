class Solution {
public:
    int reverseDegree(string s) {
        int result=0;
        for(int i=0; i<s.length(); i++){
            int rev=26-(s[i]-'a');
            result=result+rev*(i+1);
        }
        return result;
    }
};