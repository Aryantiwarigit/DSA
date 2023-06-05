vector<int> leftView(Node *root)
{
   // Your code here
//   Logic :- left se agar koi dekhega to use kaun kaun se nodes dikhenge.
// simply level order traversal karo aur har ek level ka jo 1st node hai use 
// ans me daal do, observe karo yahi hai ans.
    
    vector<int> ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root); //initially 
    
    while(!q.empty()){
        int qsize = q.size();
        // taking out the front element of each level matlab ki queue ka
        Node* front = q.front();
        for(int i=0; i<qsize; i++){
            Node* temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ans.push_back(front->data);
    }
    return ans;
}
