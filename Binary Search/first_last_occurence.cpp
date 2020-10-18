// 34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> start_end;
        int left = 0, right = nums.size();
        while(left < right){

            int mid = (left + right)/2;

            if(nums[mid] < target)
                left = mid + 1;

            else
                right = mid;
        }

        start_end.push_back(left);

        left = 0, right = nums.size();
        while(left < right){

            int mid = (left + right)/2;

            if( nums[mid] > target)
                right = mid;

            else
                left = mid + 1;
        }

        if(start_end[0] == left)
            return vector<int>{-1,-1};

        start_end.push_back(left-1);
        return start_end;
    }
};
