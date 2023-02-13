
class Solution {
public:
vector<int>ans;
    void Post(TreeNode* root)
    {
        if (root==NULL)
            return;
        Post(root->left);
        Post(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        Post(root);
        return ans;
    }
};
