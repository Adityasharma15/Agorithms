// 926. Flip String to Monotone Increasing

class Solution {

// DP Solution:
// lets keep adding chars of string and check flips required

// if added char is 1, no need to do anything as 1 at the end
// is welcomed, just inc number of ones

// if added char is 0, there are 2 options left:
    // -> convert all ones uptill now to 0, this is the reason
    // we have been keeping count of ones.
    // ~ simply add the count of ones we have i.e. ones + 1;

    // -> convert the newly added 1 to 0.
    // ~ flips done untill increases by 1 i.e. flips + 1;

public:
    int minFlipsMonoIncr(string S) {

        // no. of ones uptill now, and no. of flips done untill now
        int ones = 0, flips = 0;

        for(auto ch : S){

            if(ch == '1'){
                ones++;

            } else{
                // try to flip 0 to 1 and inc flips untill now
                flips++;
            }

            // flips req untill this stage
            // min of either convert all ones of continue w flips
            flips = min(flips, ones);
        }

        return flips;
    }
};
