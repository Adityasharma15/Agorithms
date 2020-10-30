// 169. Majority Element

class Solution {

// as majority element is always present, the bits that occur
// more than n/2 times will also be there in the majority
// element for sure.

public:
    int majorityElement(vector<int>& nums) {


        int n = nums.size(), i = 32;
        int majority = 0, mask = 1;

        while(i--){

            // to count the frequency of occurence of
            // current bit set in mask
            int freq_bit = 0;

            for(auto num : nums){
                if(mask&num)
                    freq_bit++;
            }

            // if freq of this bit is > n/2
            // it will be set in majority element
            if(freq_bit > n/2)
                majority |= mask;

            mask<<=1;
        }

        return majority;
    }
};
