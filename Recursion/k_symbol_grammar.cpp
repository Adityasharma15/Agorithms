// 779. K-th Symbol in Grammar

class Solution {

// consider this as a tree, and iterate over to its parent to
// find the value of the current node

public:
    int kthGrammar(int N, int K) {

        if(N == 1)
            return 0;

        // recursively call its parent, as even side is opp to parent,
        // return opp to parent
        if(K%2 == 0){
            return (kthGrammar(N-1, K/2) == 0)? 1 : 0;
        }

        // recursively call its parent, as odd side is equal to parent,
        // return parents value

        return (kthGrammar(N-1, (K+1)/2) == 0) ? 0 :1;

    }
};
