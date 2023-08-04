#include<iostream>
// #include<bits/stdc++.h>
using namespace std;


// BY using toupper() and tolower() function:-
// 2nd method --> To convert capital letter to its small letter simply add 32 in that like -> A = a+32;
// and to convert small letter to its capital letter simply subtract 32 from that character --> a = A-32;
void Convert(string& s){ //taking string as a reference
        for(int i=0; i<s.size()-1; i++){
        if(s[i]>='A' && s[i]<='Z'){ // its a capital letter (|| Operator use nhi hoga && hi hoga)
            s[i] = tolower(s[i]); //this function will automatically onvert the character into lowercase
        }
        else if(s[i]>='a' && s[i]<='z') s[i] = toupper(s[i]); //lowercase converted to uppercase.
        else cout<<"Invalid character."<<endl;
    }
}

void printString(string s){
    for(auto x:s){
        cout<<x;
    }
    cout<<endl;
}

int main(){
    string s = "arYAN";
    Convert(s);
    printString(s);


    // simply using ASCII values :-
    for(int i=0; i<s.size()-1; i++){
        // char ch = s[i];
        if(s[i]>='A' && s[i]<='Z'){ // its a capital letter
            s[i] = s[i]+32; //
        }
        else if(s[i]>='a' && s[i]<='z') s[i] = s[i]-32; //lowercase converted to uppercase.
        else cout<<"Invalid character."<<endl;
    }
    // printString(s);
    return 0;
}
