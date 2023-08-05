/* CAPITALIZE FIRST AND LAST CHARACTER OF EACH WORD OF THE STRING 
*/

#include<iostream>
using namespace std;

void printString(string s){
    for(auto x:s){
        cout<<x;
    }
    cout<<endl;
}

void capitalize(string &s){
    for(int i=0; i<s.size(); i++){
        // for 1st and last most word of the string convert them into capital letter
        if(i==0 || i==s.size()-1){ // i==0 means 1st letter and i==size-1 means last letter of the string
            s[i] = toupper(s[i]);
        }
        // and for rest check the space and capitalize previous and after of space.
        else if(s[i] == ' '){
            s[i-1] = toupper(s[i-1]);
            s[i+1] = toupper(s[i+1]);
        }
    }
}

int main(){
    string s="aryan tiwari";
    cout<<"Before: "; printString(s);
    capitalize(s);
    cout<<"After: ";printString(s);
    
    return 0;
}
