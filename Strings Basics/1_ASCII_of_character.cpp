#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;
    return 0;
}

/* String of Digits to int value :- "12345"(string) to 12345(int)
To do this there is a function string to int known as stoi(string);
*/
int main(){
    string s = "123";
    int a = stoi(s);
    cout<<a+2;
    return 0;
}

/* to convert any number character to its int value. Eg- '3' to 3
simply character 0 minus kardo us character me se like 
(any chracter) - '0' = int value of that character;
*/
    char a = '9';
    int b = a-'0';
    cout<<b+1; //-> this will give 10.
