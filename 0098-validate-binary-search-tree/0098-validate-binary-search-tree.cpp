class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, LLONG_MIN, LLONG_MAX);
    }

    bool isValidBST(TreeNode* root, long long minval, long long maxval) {
        if (root == NULL)
            return true;

        if (root->val >= maxval || root->val <= minval)
            return false;

        return isValidBST(root->left, minval, root->val) &&
               isValidBST(root->right, root->val, maxval);
    }
};