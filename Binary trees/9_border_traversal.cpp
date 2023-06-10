class Solution {
    
    void leftTraversal(Node* root, vector<int> &ans){
        // get all the leftmost nodes except the leaf node
        if(root==NULL)return;
        if(root->left == NULL && root->right==NULL) return; // if leaf node comes
        
        // agar left node exist karta hai to left me hi jaana par 
        // agar left exist nhi karta to right node check karna aur agar right node karta ho to right waale me chale jaana
        
        ans.push_back(root->data);
        
        if(root->left!=NULL) // means leaft node exists
            leftTraversal(root->left, ans);
        else{
            leftTraversal(root->right, ans);
        }
    }
    
    void leafTraversal(Node* root, vector<int> &ans){
        if(root == NULL) return;
        
        leafTraversal(root->left, ans);
        leafTraversal(root->right, ans);
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
        }
        
        
    }
    
    void rightTraversal(Node* root, vector<int> &ans){
        if(root==NULL)return;
        if(root->left == NULL && root->right==NULL) return;
        
        if(root->right!=NULL) // means leaft node exists
            rightTraversal(root->right, ans);
        else{
            rightTraversal(root->left, ans);
        }
        
        ans.push_back(root->data);
        
    }
    
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans; 
        if(root == NULL) return ans;
        ans.push_back(root->data);
        
        // getting all the leftmost nodes
        leftTraversal(root->left, ans);
        
        // getting all the leaf nodes
        leafTraversal(root->left, ans);
        leafTraversal(root->right, ans);
        
        // getting all the rightmost nodes
        rightTraversal(root->right, ans);
        
        return ans;
    }
};
