//brute force, time complexity O(n*m)
class Solution {
public:
    bool isSameTree(TreeNode* root, TreeNode* subRoot)
    {
        if ((!root && subRoot) || (root && !subRoot))
            return false;
        if (!root && !subRoot)
            return true;
        if (root->val == subRoot->val)
            return isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right);
        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if (!subRoot)
            return true;
        if (!root)
            return false;
        if (isSameTree(root, subRoot) == true)
            return true;
           
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

// serialization and pattern matching, time complexity O(n+m)
class Solution {
public:
    string serialize(TreeNode* root)
    {
        if (root == NULL)
            return "N";
        return "(" + to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right) + ")";
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string sRoot = serialize(root);
        string ssubRoot = serialize(subRoot);

        if (sRoot.find(ssubRoot) != string::npos)
            return true;
        return false;
    }
};

