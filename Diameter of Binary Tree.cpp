class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        Maxheight(root, diameter);
        return diameter;
    }
    int Maxheight(TreeNode* root, int& diameter)
    {
        if (root == NULL)
            return 0;
        
        int lh = Maxheight(root->left, diameter);
        int rh = Maxheight(root->right, diameter);

        diameter = max(diameter, lh+rh);
        return 1 + max(lh, rh);
    }
};