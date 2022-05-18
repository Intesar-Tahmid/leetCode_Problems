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
    
    //set<int> check(T)
    set<int>hey;
    int k;
    
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        inorder(root->left);
        k = root->val;
        hey.insert(k);
        inorder(root->right);
    }
    
    bool isUnivalTree(TreeNode* root) {
        
        inorder(root);
        
        if(hey.size()==1 || hey.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};