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
    int sum(TreeNode* root,int x)
    {
         if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return x;
        }
        int l=0;
        int r=0;
        if(root->left!=NULL )
         l=sum(root->left,10*x+root->left->val);
         if(root->right!=NULL)
         r=sum(root->right,10*x+root->right->val);

         return r+l;
    }
    int sumNumbers(TreeNode* root) {
       return sum(root,root->val);
    }
};