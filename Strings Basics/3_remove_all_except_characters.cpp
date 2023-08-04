/*
Input: S = "$Gee*k;s..fo, r'Ge^eks?"
Output: GeeksforGeeks
Explanation: Removed charcters other than alphabets. 

Input:  S = "{{{}}> *& ^%*)"
Output: -1
Explanation: There are no alphabets.
*/

// QUESTION in my mind? --> How to store a -1 as a character in a string?

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        int j = 0; // this is the correct index where we'll keep our all alphabets
        for(int i=0; i<s.size(); i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
                // means character is alphabet so store that
                s[j] = s[i];
                j++;
            }
        }
        // string ans = s.substr(0,j);
        if(s.substr(0,j).size()>0) return s.substr(0,j);
        
        return "-1";
    }
};
