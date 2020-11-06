// 96. Unique Binary Search Trees

class Solution {

// DP SOLUTION:
// we have nodes 1, 2 .. n. Iteratively we will make one of them
// the root node multiply the no. of permutations in the left
// subtree and in the right subtree as all of these will be dif
// because the root is different.

// now to calculate permutations of bsts, we only need the length
// like if there are equal no. of nodes in left subtree and right
// subtree, then there will be equal permutations as well.
public:
    int numTrees(int n) {

        // no. of bst's with index nodes
        vector<int> bst(n+1);
        bst[0] = 1;
        bst[1] = 1;

        // taking total nodes in the trees as 2 to n
        for(int nodes = 2; nodes<=n; nodes++){

            // iteratively changing the root node and multiplying
            // permutations in left * in right subtree to add.
            for(int root = 1; root<=nodes; root++){
                bst[nodes] += (bst[root-1]*bst[nodes-root]);
            }
        }

        return bst[n];
    }
};
