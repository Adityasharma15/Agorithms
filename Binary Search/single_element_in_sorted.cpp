// 540. Single Element in a Sorted Array

class Solution {

// the idea is to use binary search,
// we need to find the first place where an odd is not equal to
// last even or even is not equal to next odd.
// because the array start as something like 1, 1, so even 0
// equal next odd 1, (we use xor to find next odd or last even)

// so if we find things are abiding this condition, we move to
// right subarray, else move to left to find origin of this
// pattern shift.

// remember we can't check consecutive odd/even in case there is
// only one element in the array

public:
    int singleNonDuplicate(vector<int>& nums) {

        if(nums.size() == 1)
            return nums[0];

        int left = 0, right = nums.size();
        while(left < right){

            int mid = (left+right)/2;

            if(nums[mid] == nums[mid^1])
                left = mid+1;

            else
                right = mid;
        }

        return nums[left];
    }
};
