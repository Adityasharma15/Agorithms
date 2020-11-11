// 322. Coin Change

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<int> dp(amount+1, amount+1);

        // base condition, when 0 amount req,
        // 0 coins are needed.
        dp[0] = 0;

        for(int coin = 0; coin<n; coin++){
            for(int money = coins[coin]; money<=amount; money++){

                // if coin's value is bigger than the amount required
                // then we should skip this coin, that's why starting
                // second loop with coins value

                // using this coin and agian recursing to the same coin
                // or not using this coin, and storing value of last
                // used coin, which will automatically be there

                dp[money] = min(dp[money], 1 + dp[money - coins[coin]]);
            }
        }
            // if initial position is there, that means no way.
            return dp[amount]>amount ? -1 : dp[amount] ;
    }
};
