// Input: nums = [2, 4, 5, 9, 7]
// Output: 1
// Explanation: Difference between 5 and 4 is 1.

/*
Input: nums = [3, 10, 8, 6]
Output: 2
Explanation: Difference between 8 and 6 is 2.
*/
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
