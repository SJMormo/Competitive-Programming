/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<TreeNode*> Q;
        Q.push(root);
        int depth = 0;
        while(!Q.empty()) {
            int sz = Q.size();
            for(int i = 0; i < sz; i++) {
                TreeNode* temp = Q.front();
                Q.pop();
                if(temp->left != NULL)
                    Q.push(temp->left);
                if(temp->right != NULL)
                    Q.push(temp->right);
            }
            depth++;
        }
        return depth;
    }
};