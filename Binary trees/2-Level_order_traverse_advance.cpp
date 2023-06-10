// NOTE: THIS LEVEL ORDER TRAVERSAL IS MOST IMPORTANT kyunki isse related bohot saare traversal problems solve hote hain, 
// isliye ise acche se smjhne ke liye pepcoding ka video dekh lena usme usne simple sa ek rule bataya hai RPA (Remove-Print-Add) ka
// jiska use karke easily ise kiya jaa sakta hai.

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
  //Your code here
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
  
  while(!q.empty()){
      int qsize = q.size();
      vector<int> val;
      for(int i=0; i<qsize; i++){
          TreeNode* temp = q.front(); //isko andar hi likhna
          q.pop();
          val.push_back(temp->val);
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
      }
      ans.push_back(val);
  }
  return ans;
}

      
};
