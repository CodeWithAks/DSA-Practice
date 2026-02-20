class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size();
        int stRow = 0, endRow = m-1, stCol = 0, endCol = n-1;
        vector<int> ans;

        while(stRow<=endRow && stCol<=endCol){ //it should be a valid rectangle 
            //top
            for(int j=stCol; j<=endCol;j++){
                ans.push_back(matrix[stRow][j]);
            }

            //right
            for(int i=stRow+1;i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
            }

            //bottom
            for(int j=endCol-1;j>=stCol;j--){
                if(stRow == endRow){ //to break the repitition
                    break;
                }
                ans.push_back(matrix[endRow][j]);
            }

            //left
            for(int i=endRow-1; i>=stRow+1; i--){
                if(stCol == endCol){ //corner case for odd sized matrices
                    break;
                }
                ans.push_back(matrix[i][stCol]);
            }

            stRow++; endRow--; stCol++; endCol--;
        }

        return ans;
    }
};