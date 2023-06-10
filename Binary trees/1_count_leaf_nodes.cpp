// CONFUSION :- isme agar usi countLeaves waale function me solve kar rhe hain to solve nhi ho rha hai.
// Note :- we can solve this by any type of traversal like inorder, preorder and postorder 

void postorder(Node* root, int& count){
      if(root == NULL)return;
      
    
      postorder(root->left,count);
      postorder(root->right,count);
      if(root->left==NULL && root->right==NULL){
          count++;
      }

}
int countLeaves(Node* root)
{
  // Your code here
  int count = 0;
   
   postorder(root,count);
  
  return count;
  
  
}
