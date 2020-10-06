// 62. Unique Paths

class Solution {

// it is a simple dp problem, but we can reduce space, if we use a 2d
// array, we can see that we are only using(adding) the element of    // the last row and the previous element of the current row, so we
// can use 2 arrays, but, the last row is just the previous version
// of our very row, so we can use the current row only

public:
    int uniquePaths(int m, int n) {

         if(!m && !n)
             return 0;

        vector<int> curr_row(n,1);

        for(int col = 1; col<m; col++){
            for(int row = 1; row<n; row++){

                curr_row[row] += curr_row[row - 1];
            }
        }

        return curr_row[n-1];
    }
};
