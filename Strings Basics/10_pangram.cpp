/* APPROACH 1 :- Using sets
Brute Force Approach
Intuition
The idea to use a set is quite obvious because to check a pangram, there must be 26 alphabets no 
matter whether it is a lowercase or uppercase character. To check whether a alphabet is already 
present or not, the alphabets have been inserted in lowercase and the set size must be 26.

Implementation
Initialize a character set.
Traverse over the string and check for each character.
If the character is an lowercase alphabet then insert in the set.
In case it is a uppercase alphabet convert it in lowercase using the tolower() function and then insert it.
At the end simply check whether the set size is 26 or not. If it’s true that means all alphabets in either lowercase or uppercase was present in the string. 
*/

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        set<char> set;
        for (auto ch : str) {
            if (ch >= 'a' and ch <= 'z')
                set.insert(ch);
 
            if (ch >= 'A' and ch <= 'Z') {
                ch = tolower(ch);
                set.insert(ch);
            }
        }
 
        return set.size() == 26;
    }

};

// APPROACH 2 :- Time O(N), Space = O(1) [USING ASCII VALUES]
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
    int arr[26] = {0};
    int index; //ye index us character ka index nikal kar dega jo character aaega. 
    // And ham us index ki place me jaakar value ko 0 to 1 convert kar denge.
    
    for(int i=0; i<str.length(); i++){
        if(isupper(str[i])) index = str[i] - 'A';
        // yahan tk poori string lowercase me ho gai hai

        // ab check karo agr string me alphabet hai tb aage badho
        // aur agr kuch aur hai like numbers or special characters then skip that and just continue

        if(str[i]>='a' && str[i]<='z') {
            // means its a alphabet
            index = str[i] - 'a';

            // ab is index me jaakr array me value ko update kardo 0 to 1
        }
        arr[index]= 1;
    }
    // is loop k end tk array poora update ho chuka hai, now just check
    // ki array ki saari values 1 hai ki nhi.
    for(int i=0; i<26; i++){
        if(str[i]==0) return false;
    }

    return true;
}

};
