// 120. Triangle

class Solution {

// NOTE: you can only move  to the lower element or the right lower
// element;

public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();
        if(!n) return 0;

        // we move to the second last level and find the lowest value
        // route to reach each position from lower or right lower element
        // and continue to move to the upward level.
        for(int i = n-2; i>=0; i--){
            for(int j = 0; j<=i; j++){
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            }
        }

        return triangle[0][0];
    }
};
