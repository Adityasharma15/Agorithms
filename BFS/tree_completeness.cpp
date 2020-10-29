// 958. Check Completeness of a Binary Tree

class Solution {
public:
    bool isCompleteTree(TreeNode* root) {

        if(!root)
            return true;

        int i = 0;
        vector<TreeNode*> bfs;
        bfs.push_back(root);

        // traversing level wise until a NUll occurs
        while(i<bfs.size() && bfs[i]){
            bfs.push_back(bfs[i]->left);
            bfs.push_back(bfs[i]->right);
            i++;
        }

        // clearing the cluster of NULLs if left
        while(i<bfs.size() && !bfs[i]){
            i++;
        }

        return i == bfs.size();
    }
};
