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
    vector<int>vec;
    int k;
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root==NULL)
        {
            return vec;
        }
        
        inorderTraversal(root->left);
        k = root->val;
        vec.push_back(k);
        inorderTraversal(root->right);
        
        return vec;
    }
};