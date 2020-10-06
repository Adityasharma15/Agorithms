// 64. Minimum Path Sum

class Solution {
// this is a dp problem, we try to optimise the space, by using only one array.

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // base condition, if grid is empty
        if(!m && !n)
             return 0;

        // this stores the value of curr row, initialise it with the top row of grid
        // there is only one way in first row, so add all the values before, no choice
        vector<int> curr_row;
        curr_row.push_back(INT_MAX);

        int val = 0;
        for(auto i: grid[0]){
            val += i;
            curr_row.push_back(val);
        }

        // start from one row down as first is done
        for(int row = 2; row<=m; row++){
            for(int col = 1; col<=n; col++){

             curr_row[col] = grid[row-1][col-1] +  min(curr_row[col - 1], curr_row[col]);
            }
        }

        return curr_row[n];
    }
};
