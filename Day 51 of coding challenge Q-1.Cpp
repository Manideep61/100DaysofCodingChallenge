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
    int minDepth(TreeNode* root) {
        int result = INT_MAX;
        if(!root){
            return 0;
        }
        stack<pair<TreeNode*, int>> temp;
        temp.push({root, 1});
        while(!temp.empty()){
            TreeNode* node = temp.top().first;
            int depth = temp.top().second;
            temp.pop();
            if (!node->left && !node->right) {
                result = min(result,depth);
            }
            if(node->right!=NULL){
                temp.push({node->right, depth + 1});
            }
            if(node->left!=NULL){
                temp.push({node->left, depth + 1});
            }
        }
        return result;
    }
};
