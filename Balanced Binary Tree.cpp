class Solution {
public:
    int height(TreeNode* root, bool& isBalanced)
    {
        if (root == NULL)
            return 0;
        int lh = height(root->left, isBalanced);
        int rh = height(root->right, isBalanced);
        if (abs(lh-rh) > 1)
            isBalanced = false;
        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        bool isBalanced = true;
        if (root == NULL)
            return true;
        height(root, isBalanced);
        return isBalanced;
    }
};