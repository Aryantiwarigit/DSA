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
        int ind = distance(mp.begin(), mp.find(arr[i]));
        arr[i] = ind+1;
    }
    return arr;
}
