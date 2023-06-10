// Exactly same to same as Top view bas isme ek chez changi hogi and that's the condition to insert ans in maps

class Solution
{

    public:
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL)return ans;
        map<int,int> m;
        queue<pair<Node*, int>> q;
        
        q.push({root, 0});
        while(!q.empty()){
            Node* temp = q.front().first;
            int hd = q.front().second;
            q.pop();
            m[hd] = temp->data; // only this will change in this bottom view code rest all the code will remain same as top view
            if(temp->left) q.push({temp->left, hd-1});
            if(temp->right) q.push({temp->right, hd+1});
        }
        for(auto x:m) ans.push_back(x.second);
        return ans;
    }

};
