// 979. Distribute Coins in Binary Tree

class Solution {

// the idea is that of dfs only, int dfs function, the node
// will try to satisfy coins needed to receive/send by any
// of its parent node, and then will return the coins needed
// to send/receive by itself to the parent

// we count moves as when a req for send/receive coind is
// generated, if it is settled by parent node, then it is not
// recalculated, otherwise it gets added again and again till
// it is fulfilled
int moves = 0;

    int dfs(TreeNode * root){

        if(!root)
            return 0;

        // try to balance coins with left & right subtree
        if(root->left)
            root->val += dfs(root->left);

        if(root->right)
            root->val += dfs(root->right);

        // -1 because the root also needs a coin to satisfy
        // condition that each node has 1 coin
        int coins = root->val - 1;

        // abs because whether demand/supply, a move is a move
        moves += abs(coins);

        // return this req/excess of coins to parent
        return coins;
    }


public:
    int distributeCoins(TreeNode* root) {
        dfs(root);
        return moves;
    }

};
