// 129. Sum Root to Leaf Numbers

class Solution {

int total_sum = 0;

    void sum_path(TreeNode * root, int value){

        if(!root)
            return;

        if(!root->left && !root->right){
            total_sum += (value*10 + root->val);
        }

        if(root->left){
            sum_path(root->left, value*10 + root->val);
        }

        if(root->right){
            sum_path(root->right, value*10 + root->val);
        }

        return;
    }

public:
    int sumNumbers(TreeNode* root) {
        sum_path(root, 0);
        return total_sum;
    }
};
