class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here

    
        vector<int> ans;
        if(root == NULL) return ans;
        queue<Node*> q;
        q.push(root); //initially 
        
        while(!q.empty()){
            int qsize = q.size();
            Node* last; // for storing the last node of the particular level
            for(int i=0; i<qsize; i++){
                Node* temp = q.front();
                
                // taking out the last element of each level matlab ki queue ka
                if(i==qsize-1) last = temp; // iska matlab level ke last me pohonch gae hain isliye us last waale node ko last name ke variable me store kar lo
                
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(last->data);
        }
        return ans;
    }

};
