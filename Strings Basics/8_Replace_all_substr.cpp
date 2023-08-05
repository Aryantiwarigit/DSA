// GFG QUESTION link --> https://practice.geeksforgeeks.org/problems/replace-a-word5553/1

public:
  string replaceAll(string str, string oldW, string newW) {
      // code here
      int pos = str.find(oldW); //pos variable finds all the indexes of the string that we've to replace
      while(pos = str.find(oldW)!=string::npos){ //npos means no position is found
          // simply replace 
          str.replace(pos, oldW.size(), newW);
          
          // increment the position
          pos = str.find(oldW) + newW.size();
      }
      return str;
  }
