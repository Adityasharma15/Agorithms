// 518. Coin Change 2

class Solution {
public:
    int change(int amount, vector<int>& coins) {

    // increase size by 1 to accomodate that first row with
    // all 0s to handle the base case as we are referring to
    // the results of last coin used(i-1) inside the loop
    int coin = coins.size()+1;
    vector<vector<int>> dp(coin, vector<int>(amount+1,0));

    // if amount left is 0, its base case and a valid
    // coin combination is found
    for(int i = 0; i<coin; i++)
        dp[i][0] = 1;

    for(int i = 1; i<coin; i++){
        for(int j = 1; j<=amount; j++){

            // if amount is smalled than current coind, we
            // can't use this coin
            if(coins[i-1]>j)
                dp[i][j] = dp[i-1][j];

            else
                dp[i][j]= dp[i-1][j] + dp[i][j-coins[i-1]];
         }
    }

     return dp[coin-1][amount];
 }
};
