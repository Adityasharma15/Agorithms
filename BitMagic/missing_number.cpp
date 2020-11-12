// 268. Missing Number

class Solution {

// the array should have each value of index, so if
// we xor indexes and values of array, one value that
// has only its index and not present in array, will be
// returned

public:
    int missingNumber(vector<int>& nums) {

    int xorr = nums.size();
    for(int i=0; i<nums.size(); i++){
        xorr ^= i;
        xorr ^= nums[i];
    }
      return xorr;
    }
};
