// 513. Find Bottom Left Tree Value

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {

        if(!root)
            return -1;

        queue<TreeNode *> bfs;
        bfs.push(root);
        int first = 0;
        while(!bfs.empty()){

            int size = bfs.size();
            bool first_occured = false;
            while(size--){

                TreeNode * node = bfs.front();
                bfs.pop();

                if(!first_occured){
                    first = node->val;
                    first_occured = true;
                }

                if(node->left) bfs.push(node->left);
                if(node->right) bfs.push(node->right);
            }
        }

        return first;
    }
};
