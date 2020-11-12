// 162. Find Peak Element

class Solution {

// logarithmic time indicates binary search
// we will follow the steep, if we are currently
// decreasing, we will go to left subarray and to
// to right subarray in increasing case.

public:
    int findPeakElement(vector<int>& nums) {

        int left = 0, right = nums.size()-1;
        while(left < right){

            int curr = (left + right)/2;
            int next = curr+1;

            // if increasing, peak will be in
            // right subarray
            if(nums[curr] < nums[next]){
                left = curr+1;

            // if decreasing, peak will be in
            // left subarray
            } else{
                right = curr;
            }
        }

        return left;

    }
};
