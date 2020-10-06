// 240. Search a 2D Matrix II

class Solution {
    // Time complexity: O(n + m);

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int total_rows = matrix.size();

        if(!total_rows)
            return false;

        int col = matrix[0].size() - 1;
        int row = 0;

        // starting from top right corner, will move and reduce the matrix
        // according to binary search.
        while(row < total_rows && col >=0){

            if(matrix[row][col] == target)
                return true;

            matrix[row][col] > target ? col-- : row++;
        }

        return false;
    }
};
