/* APPROACH 1 :-
Using ordered maps
*?

// APPROACH 2
/* Time = O(N), space = O(1)
But here lexographically we have not returned the element (its a problem here)
*/

char maxoccur(string s){
    // create an array of size 256 and initialize every value to 0 
    int arr[256] = {0}; 
    int max_val = 0; // stores the max frequency of the character in the array
    char ans; // stores the answer character 

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        arr[ch]++;

        // now check for the max freq, if its greater than the max freq then simply return
        // this character
        if(arr[ch]>max_val){
            max_val = arr[ch];
            ans = ch;
        }
    }

    return ans;
}
