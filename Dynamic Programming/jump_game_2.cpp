// 45. Jump Game II

class Solution {
public:
    int jump(vector<int>& nums) {

        int n = nums.size();
        vector<int> dp(n, INT_MAX);
        dp[0] = 0;
        for(int i = 0; i<n; i++){

            int jump = nums[i];
            int j = min(jump+i, n-1);

            while(j && jump--){

                if(dp[j] > dp[i]+1)
                    dp[j--] = dp[i]+1;

                else
                    break;
            }

        }

        return dp[n-1];
    }
};
