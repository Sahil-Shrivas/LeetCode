class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = n;
        while(true){
            int prod = 1;
            int x = ans;
            while(x>0){
                prod *= x%10;
                x = x/10;
            }
            if(prod%t == 0) break;
            ans++;
        }
        return ans;
    }
};