class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        int pos=0;
        for(int i=0; i<s.size(); i++){
            if(!(s[i]==' ')){
                s[pos] = s[i]; pos++;
            }
        }
        return s.substr(0,pos);
    }
};
