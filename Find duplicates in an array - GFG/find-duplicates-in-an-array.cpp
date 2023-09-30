//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto x:m)
        {
            if(x.second>1)
            v.push_back(x.first);
            
        }
        sort(v.begin(),v.end());
        if(v.empty())
        return {-1};
        else
        return v;
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends