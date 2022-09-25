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
    bool evaluateTree(TreeNode* root) {
        //If the root node is a leaf node. Where there is only one node.
        if(root->val < 2) return root->val;
        
        //If the root node has to do OR operation
        else if(root->val == 2) return (evaluateTree(root->left) || evaluateTree(root->right));
        
        //If the root node has to do AND operation
        return (evaluateTree(root -> left) && evaluateTree(root->right));
    }
};