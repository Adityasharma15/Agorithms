// 55. Jump Game

class Solution {
public:
    bool canJump(vector<int>& nums) {

        // end is the max position we can jump to
        int end = 0;
        for(int i = 0; i< nums.size(); i++){

            // if beyond our reach, return false
            if(i>end)
                return false;

            // update the farthest we can change
            end = max(end, nums[i] + i);
        }

        return true;
    }
};
