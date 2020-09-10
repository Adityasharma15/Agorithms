// 39. Word Break

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict)
    {
        if(wordDict.size() == 0)
            return false;

        unordered_set<string> dict;

        for(auto i: wordDict)
        {
            dict.insert(i);
        }

        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;

        // we will iterate completely for the string
        for(int i = 1; i<=s.size(); i++)
        {
            // we will iterate back from the index of iterating
            // the string(i), if we find some index which is true
            // or which is present in dictionary, we check if
            // rest of remaining part(from this index to i) is present
            // in the dictionary or not.
            for(int j = i-1; j>=0; j--)
            {

                if(dp[j])
                {
                    string temp = s.substr(j, i - j);

                    if(dict.count(temp) > 0)
                    {
                        dp[i] = true;
                        break;
                    }

                }
            }
        }


        return dp[s.size()];
    }
};
