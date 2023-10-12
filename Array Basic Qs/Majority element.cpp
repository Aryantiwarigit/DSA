/* GFG Link - https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=majority-element
*/

// Optimal approach by sorting and then solving. 

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int ans = -1;
        // just to tackle edge case when only 1 element is present in array
        if(size == 1) ans = a[0];
        else
       { 
           sort(a,a+size);
           int count = 1;
           for(int i=0; i<size; i++){
            
            if(a[i] == a[i+1]) count++;
            else if((a[i] != a[i+1]) || (i == size-1)){
                if(count> size/2){
                    ans = a[i];
                    break;
                }
                else count = 1;
            }
            
        }}
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}


