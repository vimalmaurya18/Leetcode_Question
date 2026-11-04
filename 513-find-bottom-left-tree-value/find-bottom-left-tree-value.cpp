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
        vector<vector<int>>result;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int size=q.size();
            vector<int>ans;

            for(int i=0;i<size;i++)
            {
                TreeNode* frontnode=q.front();
                q.pop();

                ans.push_back(frontnode->val);
                if(frontnode->left)
                {
                    q.push(frontnode->left);
                }
                if(frontnode->right)
                {
                    q.push(frontnode->right);
                }
            }
            result.push_back(ans);
        }
        return result[result.size()-1][0];
    }
};