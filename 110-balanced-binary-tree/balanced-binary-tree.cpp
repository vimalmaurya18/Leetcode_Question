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

    //Apporach -> This is the bruteforce apporach-> It will use the complexity o(n^2)
    //As we are calculating the height of the tree and hence time comlexity is increasing
    
    // int height(TreeNode* root)
    // {
    //     if(root==NULL)
    //     {
    //         return 0;
    //     }
        
    //     int l=height(root->left);
    //     int r=height(root->right);

    //     return max(l,r)+1;
    // }
    // bool isBalanced(TreeNode* root) {
    //     if(root==NULL)
    //     {
    //         return true;
    //     }
        
    //     bool left=isBalanced(root->left);
    //     bool right=isBalanced(root->right);
    //     bool diff=abs(height(root->left) - height(root->right))<=1;

    //     if(left && right && diff)
    //     {
    //         return true;
    //     }
    //     return false;
    // }

    //Apporach 2-> This is optimal apporach to solve it by the use of concept of pairing
    //In this the timw comlexity will be o(n)
    pair<int,bool> balance(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<int,bool>p=make_pair(0,true);
            return p;
        }

        pair<int,bool>l=balance(root->left);
        pair<int,bool>r=balance(root->right);
        bool diff=abs(l.first - r.first)<=1;

        int height=max(l.first,r.first)+1;

        if(l.second && r.second && diff)
        {
            pair<int,bool>ans;
            ans.first=height;
            ans.second=true;
            return ans;
        }
        else
        {
            pair<int,bool>ans;
            ans.first=height;
            ans.second=false;
            return ans;
        }
    }
    bool isBalanced(TreeNode* root)
    {
         return balance(root).second;
    }
};