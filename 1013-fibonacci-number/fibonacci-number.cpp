class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;      //base case 
        if(n==1) return 1;      //base case 
        int ans1=fib(n-1);      //magic 
        int ans2=fib(n-2);      //magic 
        return ans1+ans2;       //answer 
    }
};