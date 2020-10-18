// 153. Find Minimum in Rotated Sorted Array

class Solution {
// We will use modified binary search, the idea is to
// put the left pointer to the beginning of the original
// array.
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while(left<right){

            // if the array is not rotated or
            // we have reached the starting of the
            // original array
            if(nums[left] < nums[right])
                return nums[left];

            int mid = (left + right)/2;

            // if mid lies in the part of rotated array
            // = because if mid is occuring to the pos of left
            if(nums[mid] >= nums[left]){
                left = ++mid;
            }

            // if mid lies in the part of non rotated array
            else {
                right  = mid;
            }
        }

        return nums[left];
    }
};
