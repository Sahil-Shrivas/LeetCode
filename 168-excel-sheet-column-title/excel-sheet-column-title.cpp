class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber > 0){
            columnNumber--;
            char ch='A'+(columnNumber % 26);
            result = ch + result;
            columnNumber = columnNumber/26;
        }
        return result;
    }
};