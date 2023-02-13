class Solution {
vector<int>ans;
public:
void inorder (TreeNode* root)
{
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}
    bool isValidBST(TreeNode* root) {
       inorder(root);
       for (int i=0;i<ans.size()-1;i++)
       {
           if (ans[i+1]<ans[i])
           return false;
           else if (ans[i+1]==ans[i])
           return false;
       }
       return true;
    }
};
