// Check whether two given trees are identical to each other or not?

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        else if(p==NULL && q!=NULL) return false;
        else if(p!=NULL && q==NULL) return false;

        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        bool root = p->val == q->val; //checking the root node of both same side is same or not
      
//       if left subtree and right subtree are identical then check the root node and if root node is also same means identical that means
//       entire tree is identical. So we have to compare all these 3 conditions and if all these conditions are true then the tree is said to
//       be identical

        if(left && right && root) return true;
        return false;

    }
};
