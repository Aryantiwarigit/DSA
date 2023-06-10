// Top view of Binary tree is very important

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
            if(m[hd]==NULL) m[hd] = temp->data;
            if(temp->left) q.push({temp->left, hd-1});
            if(temp->right) q.push({temp->right, hd+1});
        }
        for(auto x:m) ans.push_back(x.second);
        return ans;
    }

};
