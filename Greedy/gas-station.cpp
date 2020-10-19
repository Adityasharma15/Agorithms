// 134. Gas Station

class Solution {

// the idea is simple, if we start from x and reach y, then
// there is no station bw x & y from which we can reach all
// the stations, because if there was, we should have reached
// all stations not just till y. So we will now begin from
// y+1, this way our time complexity becomes O(n),

public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();

    // we first find if it is possible
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += (gas[i] - cost[i]);
    }

    if(sum < 0 || !n) return -1;

    // now we know it is possible
    sum = 0;
    int start = 0;
    for(int i = 0; i<n; i++){
        sum += gas[i] - cost[i];

        // we were not able to do it till i, so we will not
        // consider them again and start from i+1.
        if(sum < 0){
            start = i+1;
            sum = 0;
        }
    }

    return start;
    }
};
