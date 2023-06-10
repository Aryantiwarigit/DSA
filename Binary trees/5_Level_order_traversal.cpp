// Approach 1 :- without spacing (NOT SO USEFULL)

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int> ans;
      if(root == NULL) return ans;
      
      queue<Node*> q;
      q.push(root);
      
      while(!q.empty()){
          Node* temp = q.front();
          ans.push_back(temp->data);
          q.pop();
          
          if(temp->left != NULL) q.push(temp->left);
          if(temp->right != NULL) q.push(temp->right);
      }
      return ans;
    }
};


// APPROACH 2 :-  With spaces (usefull)

