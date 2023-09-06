// S = i.like.this.program.very.much
// Output: much.very.program.this.like.i

#include <iostream>
using namespace std;

string reversed(string s) {
    string ans;
    int last = s.size();
    int index;
    int len;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '.') {
            index = i + 1;
            len = last - index;
            ans.append(s.substr(index, len));
            ans.append(".");
            last = i;
        }
    }
    // Append the last word (including the space before it) to the result.
    ans.append(s.substr(0, last));
    return ans;
}

int main() {
    string s = "i.like.this.program.very.much";
    cout << reversed(s);

    return 0;
}


