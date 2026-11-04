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
    int findBottomLeftValue(TreeNode* root) {

        //In this we only need to traverse levelwise
        queue<TreeNode*>q;
        q.push(root);
        int ans;
        while(!q.empty())
        {
            int size=q.size();
             ans=q.front()->val;

            for(int i=0;i<size;i++)
            {
                TreeNode* frontnode=q.front();
                q.pop();

                if(frontnode->left)
                {
                    q.push(frontnode->left);
                }
                if(frontnode->right)
                {
                    q.push(frontnode->right);
                }
            }
        }
         return ans;
    }
};