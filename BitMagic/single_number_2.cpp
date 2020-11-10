// 137. Single Number II

class Solution {

// this is a general solution, can be applied to
// numbers appearing k times
public:
    int singleNumber(vector<int>& nums) {

         // frequency of appearance of each bit
         vector<int> bitCount(32, 0);
         for(auto n: nums){

             int num = n;
             int i = 0;
             for(int i = 0; i<32; i++){
                 bitCount[i] += num&1;
                 num>>=1;

                 if(!num) break;
             }
         }

        // form the number having repeated only once
        int once = 0;
        for(int i = 0; i<32; i++){

            // if not repeated 3 times
            if(bitCount[i]%3){
                once = once|(1<<i);
            }
        }
        return once;
    }
};
