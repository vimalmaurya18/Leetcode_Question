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
    int rightheight(TreeNode* root)
    {
         if(root==NULL)
        {
            return 0;
        }

        int r=rightheight(root->right);
        return r+1;
    }
    int leftheight(TreeNode* root)
    {
         if(root==NULL)
        {
            return 0;
        }

        int l=leftheight(root->left);
        return l+1;
    }
    int countNodes(TreeNode* root) {
        int hl=leftheight(root);
        int hr=rightheight(root);
        if(hl==hr)
        return pow(2,hl)-1;
        else
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};