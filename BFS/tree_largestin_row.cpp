// 515. Find Largest Value in Each Tree Row

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {

     vector<int> level_max;

     if(!root)
         return level_max;

      queue<TreeNode *> bfs;
      bfs.push(root);

      while(!bfs.empty()){

          int maxi = INT_MIN;
          int size = bfs.size();

          // traversing in one level
          while(size--){

              TreeNode * curr = bfs.front();
              bfs.pop();

              if(curr->left) bfs.push(curr->left);
              if(curr->right) bfs.push(curr->right);

              maxi = max(maxi, curr->val);
          }

          level_max.push_back(maxi);
      }

        return level_max;
    }
};
