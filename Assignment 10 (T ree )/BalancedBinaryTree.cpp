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
    int getHeight(TreeNode* root) {
        if (root == NULL){
            return -1;
        }
        if (root->left == NULL && root->right == NULL){
            return 0;
        }
        return 1 + max(getHeight(root->left), getHeight(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if (root==NULL)
            return true;
        int l=getHeight(root->left);
        int r=getHeight(root->right);
        return (abs(l-r)<2 && isBalanced(root->left) && isBalanced(root->right));
    }
};
