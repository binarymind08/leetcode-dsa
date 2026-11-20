
class Solution {
public:
    TreeNode *first, *second, *prev;
    void inorder(TreeNode* root) {
        if (!root) return;
        
        inorder(root->left);
        
        if (prev && prev->val > root->val) {
            if (!first) first = prev;
            second = root;
        }
        prev = root;
        
        inorder(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        first = second = prev = nullptr;
        inorder(root);
        swap(first->val, second->val);
    }
};