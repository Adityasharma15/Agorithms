// 35. Search Insert Position

class Solution {

// Could have been easily done using lowerbound.
// return lowerbound(nums.begin(), nums.end(), target) - nums.begin();
// lowerbound points to value >= the target value

public:
    int searchInsert(vector<int>& nums, int target) {

        int left = 0, right = nums.size();
        while(left<right){

            int mid = (left+right)/2;

            if(nums[mid] == target)
                return mid;

            if(nums[mid]<target)
                left = mid + 1;

            else
                right = mid;
        }

        return left;
    }
};
