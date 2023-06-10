class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        // code here
        
        // LOGIC :-
        /* Mirror ka matlab har ek node ko swap kar do
        Isme hame root ko kuch karne ki zrurt nhi hai wo waisa ka waisa hi rahega
        left subtree aur right subtree ke recursion apne aap sab kuch kar dega
        bacha root->left, aur root->right node to ye dono ko ham last me swap kar denge
        */
        if(root == NULL) return;
        mirror(root->left);
        mirror(root->right);
        swap(root->left, root->right);
    }
};
