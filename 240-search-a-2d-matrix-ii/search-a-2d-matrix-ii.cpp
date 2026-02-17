class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() , n = matrix[0].size();

        int row = 0 , col = n-1; //corner left (to reduce possibilities)
        while(row<m && col>=0) {
            if(target == matrix[row][col]){
                return true;
            } else if(target < matrix[row][col]){
                col--;       //search left side , remove that column
            } else {
                row++;        //search downwards , remove that row
            }
        }
        return false;        
    }
};