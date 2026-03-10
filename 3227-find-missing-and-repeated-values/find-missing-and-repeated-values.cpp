class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans; //empty container
        unordered_set<int> s; //store grid values
        int a , b;
        int n =grid.size();
        int actualSum=0 , expectedSum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualSum += grid[i][j];

                if(s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j]; //repeating no. found
                    ans.push_back(a);
                }
                s.insert(grid[i][j]); //add the values of grid in set 
            }
        }

        expectedSum = (n*n) * (n*n + 1) /2;
        b = expectedSum + a - actualSum;
        ans.push_back(b); //missing no. found

        return ans; 
    }
};