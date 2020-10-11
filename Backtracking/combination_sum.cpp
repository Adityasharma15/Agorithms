// 39. Combination Sum

class Solution {
 vector<vector<int>> combinations;

    void combinationsutil( vector<int> num, int target, int index, int sum, vector<int> curr_combination){

        if(index >= num.size() || sum > target)
            return;

        // if we are not considering this element
        combinationsutil(num, target, index+1, sum, curr_combination);

        sum+= num[index];
        curr_combination.push_back(num[index]);

        if(sum == target){
            combinations.push_back(curr_combination);
            curr_combination.clear();
        }

        // if we consider this element and call on next
        // combinationsutil(num, target, index+1, sum, curr_combination);

        // if we consider this element and call this element again
        // if we want to consider the case where we take this element only
        // once, the next call will skip the current and move to next element.
        combinationsutil(num, target, index, sum, curr_combination);

        return;
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        combinationsutil(candidates, target, 0, 0, v);
        return combinations;
    }
};
