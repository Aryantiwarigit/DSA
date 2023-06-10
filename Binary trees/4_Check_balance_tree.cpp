// Time complexity -> O(N^2)
class Solution {
    int height(TreeNode* root){
        if(root ==NULL)return 0;
        int l = height(root->left);
        int r = height(root->right);
        return max(l,r)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool third = abs(height(root->left)-height(root->right))<=1;

        if(left && right && third) return true;
        return false;
    }
};
