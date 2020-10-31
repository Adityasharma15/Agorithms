// 279. Perfect Squares279. Perfect Squares

class Solution {
public:
    int numSquares(int n) {

        if(n<=1)
            return n;

        vector<int> squares;
        for(int i = 1; i*i<=n; i++){
            squares.push_back(i*i);
        }

        int sq = squares.size();                                                   vector<vector<int>> dp(sq, vector<int>(n+1, 0));

       // doing manually for 1
       for(int j = 0; j<n+1; j++)
           dp[0][j] = j;

        for(int i = 1; i<sq; i++){
            for(int j = 1; j<(n+1); j++){

                if(squares[i]>j)
                    dp[i][j] = dp[i-1][j];

                else
                   dp[i][j] = min(dp[i-1][j], dp[i][j - squares[i]] + 1);
            }
        }

        return dp[sq-1][n];
    }
};
