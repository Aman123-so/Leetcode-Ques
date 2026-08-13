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
    int ans=0;
    int fun(TreeNode* root){
        if(root==NULL)
        return 0;

        int leftSum= fun(root->left);
        int rightSum= fun(root->right);

         ans += abs(leftSum - rightSum);

         return leftSum + rightSum+ root->val;
    }
    int findTilt(TreeNode* root) {
        fun (root);
        return ans;
    }
};