// 378. Kth Smallest Element in a Sorted Matrix

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();

        if(n==1)
            return matrix[0][0];

        int left = matrix[0][0];
        int right = matrix[n-1][n-1];

        while(left<=right){

            int mid = (left + right)/2;
            int smaller_than_mid = 0;

            for(int i = 0; i<n; i++){
                smaller_than_mid += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }

            if(smaller_than_mid < k)
                left = mid + 1;

            else
                right = mid-1;
        }

        return left;
    }
};
