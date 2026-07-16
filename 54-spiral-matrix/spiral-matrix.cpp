class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a = matrix[0].size()-1;
        int b = matrix.size()-1;
        int up = 0;
        int right = a;
        int left = 0;
        int down = b;
        vector<int> result;

        while(up <= down && left <= right){
            for(int i = left; i <= right; i++){
                result.push_back(matrix[up][i]);
            }
            up++;

            for(int i = up; i<= down; i++){
                result.push_back(matrix[i][right]);
            }
            right--;

            if(up <= down){
                for(int i = right; i >= left; i--){
                    result.push_back(matrix[down][i]);
                }
                down--;
            }

            if(left <= right){
                for(int i = down; i >= up; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }

};