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
    //For the height of the binary tree
    
    //Apporach-1  Bruteforce
    //In this the time complexity will will be o(n^2) 

    // int height(TreeNode* root)
    // {
    //     //base case
    //     if(root==NULL)
    //     {
    //         return 0;
    //     }
    //     int l=height(root->left);
    //     int r=height(root->right);
    //     return max(l,r)+1;
    // }
    // int diameterOfBinaryTree(TreeNode* root) {
    //     if(root==NULL)
    //     {
    //         return 0;
    //     }
    //     int l=diameterOfBinaryTree(root->left);
    //     int r=diameterOfBinaryTree(root->right);
    //     int n=height(root->left)+height(root->right);

    //     return max(n,max(l,r));
    // }

    //Apporach-2
    //optimised  In this the timw comlexity will be o(n)

     pair<int,int>diameter(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        pair<int,int>l=diameter(root->left);
        pair<int,int>r=diameter(root->right);

        int op1=l.first;
        int op2=r.first;
        int op3=l.second+r.second;

         pair<int,int>ans;
         ans.first=max(op3,max(op1,op2));
         ans.second=max(l.second,r.second)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).first;
    }
};