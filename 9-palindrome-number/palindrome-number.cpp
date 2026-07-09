class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int n=x;
        if(x<0)
            return false;
        while(x){
            int lastDigit = x%10;
            rev = rev*10+lastDigit;
            x=x/10;
        }
        if(n==rev) 
            return true;
        return false;
    }
};