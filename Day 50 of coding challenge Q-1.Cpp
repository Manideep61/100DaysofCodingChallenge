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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(!root){
            return result;
        }
        stack<TreeNode*> temp;
        temp.push(root);
        while(!temp.empty()){
            TreeNode* node = temp.top();
            temp.pop();
            result.push_back(node->val);
            if(node->right!=NULL){
                temp.push(node->right);
            }
            if(node->left!=NULL){
                temp.push(node->left);
            }
        }
        return result;
    }
};
