// 606. Construct String from Binary Tree

class Solution {
public:
    string tree2str(TreeNode* t) {
        if(!t)
            return "";

        string tree = to_string(t->val);

        if(t->left)
           tree += "(" + tree2str(t->left) + ")";

        else if(t->right)
            tree += "()";

        if(t->right)
            tree += "(" + tree2str(t->right) + ")";

        return tree;
    }
};
