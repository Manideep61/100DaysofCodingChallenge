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
    int sumOfLeftLeaves(TreeNode* root) {
        int result = 0;
        if(!root){
            return result;
        }
        stack<TreeNode*> temp;
        temp.push(root);
        while(!temp.empty()){
            TreeNode* node = temp.top();
            temp.pop();
            if(node->left!=NULL){
                if(node->left->left == NULL && node->left->right == NULL){
                    result += node->left->val;
                }
                temp.push(node->left);
            }
            if(node->right!=NULL){
                temp.push(node->right);
            }
        }
        return result;
    }
};
