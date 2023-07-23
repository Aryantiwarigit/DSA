// find duplicates in an array -- GFG qs
// Given an array a[] of size N which contains elements from 0 to N-1, 
// you need to find all the elements occurring more than once in the given array. Return the answer in ascending order.
// Input:
// N = 5
// a[] = {2,3,1,2,3}
// Output: 2 3 
// Explanation: 2 and 3 occur more than once in the given array.

    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        vector<int> ans;
        for(auto x : mp){
            if(x.second>1) ans.push_back(x.first);
        }
        sort(ans.begin(), ans.end());
        if(ans.empty()) ans.push_back(-1);
        
        return ans;
    }
