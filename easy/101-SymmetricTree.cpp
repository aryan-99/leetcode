/*
101. Symmetric Tree
10/21/2023
Time: 15m 58s
Note: Combination of inverting tree and same tree
*/

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
    void invert(TreeNode* root) {
        if (root == nullptr) return;
        invert(root->left);
        invert(root->right);
        TreeNode* tmp;
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL ) return true;
        else if (p != NULL && q != NULL) return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
        else return false;
    }

    bool isSymmetric(TreeNode* root) {
        invert(root->right);
        return (isSameTree(root->left, root->right));
    }

};