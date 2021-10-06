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
    vector<int> inorderTraversal(TreeNode* root) {
        
        // iterative approach
        stack<TreeNode*>s;
        vector<int>ans;
        
        TreeNode * cur = root;
        
        if(root==NULL)
            return ans;
        
        while(!s.empty() || cur!=NULL)
        {
            while(cur!=NULL)
            {
                s.push(cur);
                cur = cur->left;
            }
            
            cur = s.top();
            ans.push_back(cur->val);
            s.pop();
            
            cur = cur->right;
            
        }
        return ans;
        
        
        
        
    }
};
