/* Input: s = "abbaca" Output: "ca"
   Input: s = "azxxzy" Output: "ay"
*/

string ans;
stack<char> st;
for(int i=0; i<s.size(); i++){
    if(st.empty() || s[i]!=st.top()){
        st.push(s[i]);
    }
    else{
        st.pop();
    }
}
while(!st.empty()){
    char c = st.top();
    ans.push_back(c);
    st.pop();
}
reverse(ans.begin(), ans.end());
return ans;
