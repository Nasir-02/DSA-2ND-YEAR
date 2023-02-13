class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool c;
        if (p==NULL && q==NULL)
            return true;
        else if (p!=NULL && q==NULL)
            return false;
        else if (p==NULL && q!=NULL)
            return false;
        if (p->val!=q->val) 
           return false;
        return (isSameTree(p->right, q->right)&& isSameTree(p->left,q->left));
    }
};
