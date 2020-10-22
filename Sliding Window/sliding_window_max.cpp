// 239. Sliding Window Maximum

class Solution {
// we will maintain a deque of max size k

public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> maxs;
        deque<int> dq;

        for(int i = 0; i<nums.size(); i++){

            // if the element of front is not in
            // the recent k elements
            if(!dq.empty() && dq.front() <= (i-k))
                dq.pop_front();

            // remove all elements smaller than this
            // element as they will not be in our answers
            // as we have got bigger elemetns
            while(!dq.empty()&&nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }

            // we need to push this element in the queue
            // because we have no idea about the rest of
            // elements of the array, so even if this is
            // smalles uptill now, we need to store it
            dq.push_back(i);

            if(i>=(k-1))
                maxs.push_back(nums[dq.front()]);
        }

        return maxs;
    }
};
