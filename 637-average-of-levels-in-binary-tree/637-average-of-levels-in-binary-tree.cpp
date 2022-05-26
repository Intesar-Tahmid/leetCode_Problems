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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(q.size())
        {
            int x = q.size();
            double average = 0;
            for(int k = 0; k<x; k++)
            {
                TreeNode* temp = q.front();
                q.pop();
                average = average + temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            v.push_back(average/x);
        }
        
        return v;
    }
};