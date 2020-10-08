// 763. Partition Labels

class Solution {

// Using sliding window protocol
// left and right will contain the probable window that can be one of the
// partition, right will point to the farmost last occurence of any of the
// elements inside this window.

public:
    vector<int> partitionLabels(string S) {

        vector<int> partitions;

        int right = 0, left = -1;
        unordered_map<char, int> last_occurence;

        for(int i = 0; i<S.size(); i++){
           last_occurence[S[i]] = i;
        }

        for(int i = 0; i<S.size(); i++){

            right = max(right, last_occurence[S[i]]);

            // if farmost last occurence of the chars in window is reached
            // it is one of the partition
            if(i==right){
                partitions.push_back(right-left);
                left = i;
            }
        }

        return partitions;
    }
};
