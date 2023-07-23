// Sort an array according to the order defined by another array:-
/*
Input:
N = 11, M = 4 --> size of both arrays
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
Output: 
2 2 1 1 8 8 3 5 6 7 9
Explanation: Array elements of A1[] are sorted according to A2[]. So 2 comes first then 1 comes, then comes 8, then finally 3
comes, now we append remaining elements in sorted order.
*/


public:
//Function to sort an array according to the other array.
vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
{
  //Your code here
  // Step 1 : sbse pehle saare elemenst map me store kar lenge
  vector<int> ans;
  map<int,int> mp;
  for(auto x : A1){
      mp[x]++;
  }
  
  // Step 2: Now we'll traverse 2nd array and according to that we'll
  // check the map and store the answer.
  for(int i=0; i<M; i++){
      int frequency = mp[A2[i]];
      while(frequency!=0){
          ans.push_back(A2[i]);
          frequency--;
      }
      mp[A2[i]] = 0; //--> Step 3 
  }
  
  // Step 3 : Now store remaining elements of A1 array in increasing order.
  // For this firstof all set all the map freq to 0.
  // Traverse the whole hashmap and if the freq of an element is not 0 put that in answer.
  // since we've used ordered map thus this will be in sorted order only.
  
  for(auto x : mp){
      int val = x.first, freq = x.second;
      while(freq!=0){
          ans.push_back(val);
          freq--;
      }
  }
  return ans;
} 
