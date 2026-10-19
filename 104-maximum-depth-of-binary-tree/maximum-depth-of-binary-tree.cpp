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
    int height(TreeNode* root,int n)
    {
        //base case
        if(root==NULL)
        {
            return 0;
        }
        int k=n++;
        int l=height(root->left,n);
        int r=height(root->right,n);

        return max(l,r)+1;
    }
    int maxDepth(TreeNode* root) {
        int n=height(root,0);
        return n;
    }
};