/*
Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with same frequency. So, both are anagrams.

Input:a = allergy, b = allergic
Output: NO
Explanation: Characters in both the strings are not same, so they are not anagrams.
*/

bool isAnagram(string a, string b){
        
        // Your code here
        unordered_map<char,int> m;
        // step1 -> Put all values of A inside map and store their frequency
        for(auto x:a){
            m[x] = m[x]+1; //also can be written as m[x]++;
        }
        
        // Step 2-> Now traverse through B string and decrement every character frequency
        for(auto x:b){
            m[x] = m[x]-1; // m[x]-=1;
        }
        
        // Step 3-> Now if their frequency becomes 0 that means they're anagaram but if any of the character is nonzero thatmeans they're not anagram.
        for(auto x:m){
            if(x.second!=0) return false;
        }
        return true;
        
    }
