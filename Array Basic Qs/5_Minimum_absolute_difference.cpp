int minimum_difference(vector<int>nums){
    // Code here
    sort(nums.begin(), nums.end());
    int min = INT_MAX;
    for(int i=0; i<nums.size()-1; i++){
        int diff = abs(nums[i]-nums[i+1]);
        if(diff < min) min = diff;
    }
    return min;
}  
