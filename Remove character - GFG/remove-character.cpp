//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        string ans="";
       unordered_map<char,int>m;
       for(int i=0;i<string2.size();i++)
       {
           m[string2[i]]=1;
       }
       for(int i=0;i<string1.size();i++)
       {
           if(m[string1[i]]!=1)
           {
               ans=ans+string1[i];
           }
       }
       return ans;
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends