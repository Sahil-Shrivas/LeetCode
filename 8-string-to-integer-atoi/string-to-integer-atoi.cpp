class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

        while (i < s.size() && s[i] == ' ')
            i++;

        if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.size() && s[i] == '+') {
            i++;
        }

        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return sign * num;
    }
};