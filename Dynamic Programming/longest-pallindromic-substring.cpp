// 5. Longest Palindromic Substring

// - NOT A DP SOLUTION

// The idea is that there can be 2*len - 1 centres for a substring, len characters of
// the string and len - 1 centres could be between two characters, so if we check
// on all these centres, the time complexity will be O(n^2).


class Solution {

public:

    int check_centre(string s, int Left, int Right) {

        // finding longest substring whose centre is this.
        while(Left >= 0 && Right <s.length() && s[Left] == s[Right]) {
            Left--; Right++;
        }

        // as the pointers right and left are already ahead of
        // the actual positions of the substring, so subtract just 1
        // to get the length of the actual susbstring.
        return ((Right - Left) - 1);
    }

    string longestPalindrome(string s) {

        if(s.length() <=0)
            return "";

        int start = 0, end = 0;

        for(int i = 0; i<s.length(); i++)
        {
            // if i is the centre, then max length
            int len1 = check_centre(s, i, i);

            // if centre is bw i and i+1, then max length
            // we are sending position len for edge case, but
            // will check this in check_centre
            int len2 = check_centre(s, i, i+1);

            int max_len = max(len1, len2);

            // if current substring is shorter
            // assign new start and end points
            if((end-start) < max_len) {

            // for start, the char at i, so we subtract 1
            // but not for the end
            start = i - (max_len -1)/2;
            end = i + max_len/2;
            }

        }

        // substr function, takes starting index and length
        // of substring.
        return s.substr(start, (end-start)+1);
    }
};
