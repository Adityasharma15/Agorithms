// 513. Find Bottom Left Tree Value

class Solution {
int max_depth = 0;
TreeNode * left_node = NULL;

    void dfs(TreeNode * root, int curr_depth){

        if(!root)
            return;

        dfs(root->left, curr_depth + 1);
        dfs(root->right, curr_depth + 1);

        if(curr_depth > max_depth){
            max_depth = curr_depth;
            left_node = root;
        }

        return;
    }


public:
    int findBottomLeftValue(TreeNode* root) {
        left_node = root;
        dfs(root,0);
        return left_node->val;
    }
};
