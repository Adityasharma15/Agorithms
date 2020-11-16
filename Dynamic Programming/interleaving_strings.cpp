// 97. Interleaving String

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {

        int len1 = s1.size();
        int len2 = s2.size();

        // check on lenghts
        if(s3.size() != (len1 + len2))
            return false;

        // bottom up dp
        vector<vector<bool>> dp( len1+1, vector<bool>(len2+1));


        // at any point length of s3 considerint is i+j
        for(int i = 0; i<=len1; i++){
            for(int j = 0; j<=len2; j++){

                // so if all 3 are empty
                if(i == 0 && j == 0){
                    dp[i][j] = true;
                }

                // if no role of s1
               // check if prev was interleaving and curr char are equal
                else if(i == 0){
                    dp[i][j] = dp[i][j-1] && s2[j-1] == s3[j-1];
                }

                // if no s2
                else if(j == 0){
                    dp[i][j] = dp[i-1][j] && s1[i-1] == s3[i-1];
                }

                // if both
                else{

                    dp[i][j] = (dp[i][j-1] && s2[j-1] == s3[(i +j)-1]) || (dp[i][j] = dp[i-1][j] && s1[i-1] == s3[(i+j)-1]);
                }

            }
        }

        return dp[len1][len2];
    }
};
