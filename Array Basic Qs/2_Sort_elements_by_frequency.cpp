static bool cmp(vector<int>a, vector<int>b){
    if(a[1]<b[1]) return true;
    if(a[1]==b[1]){
        if(a[0]>b[0]) return true;
    }
    return false;
}

vector<int> frequencySort(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(auto x:nums) mp[x]++;

  // we'll store all map values and keys in vector so that we can sort the vector according to values. We can't sort a mao directly.
    vector<vector<int>> v;
    for(auto x : mp){
        v.push_back({x.first,x.second});
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> ans;
    for(auto x:v){
        int i=x[1];
        while(i>=1) ans.push_back(x[0]); i--;
    }
    return ans;
}
