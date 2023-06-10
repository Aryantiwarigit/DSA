// Zig zag traversal me ham main level order traversal ka hi use karte hain
// NOTE:- This code is showing TLE in leetcode and unexpected error in gfg pata nhi kyun.

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector <int> ansmain;
    	if(root == NULL) return ansmain;
    	queue<Node*> q;
    	q.push(root);
    	int level = 1;
    	
    	while(!q.empty()){
    	    int size = q.size();
    	    vector<int> data;
    	    for(int i=0; i<size; i++){
    	        Node* temp = q.front();
    	        q.pop();
    	        data.push_back(temp->data);
    	        
    	       // checking left and right nodes
    	       if(root->left) q.push(root->left);
    	       if(root->right) q.push(root->right);
    	    }
    	    if(level%2 == 0){
    	        reverse(data.begin(), data.end());
    	    }
    	    for(int i=0; i<data.size(); i++){
    	        ansmain.push_back(data[i]);
    	    }
    	    level++;
    	
    	    
    	}
    	
    	return ansmain;
    	
    	
    	
    }
};
