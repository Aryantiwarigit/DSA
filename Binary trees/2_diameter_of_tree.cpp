// BRUTE FORCE APPROACH :- Time -> O(N^20, Space -> O(1) 
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int height(Node* root){
        if(root == NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        
        return max(left,right)+1;
    }
    
    int diameter(Node* root) {
        // Your code here
        if(root == NULL) return 0;
        
        int left = diameter(root->left);
        int right = diameter(root->right);
        int both = height(root->left)+height(root->right)+1;
        
        return max(left,max(right,both));
    }
};

// OPTIMIZED APPROACH WITH TIME COMPLEXITY O(N) :-

