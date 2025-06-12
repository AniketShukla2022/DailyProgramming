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
    void inorder(TreeNode* root, int k, vector<int>& vec)
    {
        if (!root || vec.size() == k)
            return;
        inorder(root->left, k, vec);
        vec.push_back(root->val);
        inorder(root->right, k, vec);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vec;
        inorder(root, k, vec);
        return vec[k-1];
    }
};
