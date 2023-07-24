/*
Replace elements by its rank in the array. EXAMPLE -->
arr = [20, 15, 26, 2, 98, 6]
Output:
4, 3, 5, 1, 6, 2
Explanation:
After sorting, array becomes {2,6,15,20,26,98}
*/

// NOTE :- This solution is throwing TLE in gfg so we need to optimize this.

vector<int> replaceWithRank(vector<int> &arr, int N){
    map<int,int> mp;
    for(auto x : arr){
        mp[x]++;
    }
    
    for(int i=0; i<N; i++){
        int ind = distance(mp.begin(), mp.find(arr[i])); // --> This distance function is taking O(N) time to serach the index so because of this TLE is occuring.
        arr[i] = ind+1;
    }
    return arr;
}


// OPTIMIZED APPROACH :-
vector<int> replaceWithRank(vector<int> &arr, int N){
    // map<int,int> mp;
    vector<int> v = arr;
    sort(v.begin(), v.end());
    int rank = 1;
    unordered_map<int,int> mp;
    for(auto x:v){
        if(mp[x] == 0){
            mp[x] = rank;
            rank++;
        }
    }
    for(int i=0; i<arr.size(); i++){
        int rnk = mp[arr[i]];
        arr[i] = rnk;
    }
    return arr;
