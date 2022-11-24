class Solution {
public:
      vector<string> v;
    void solve(int open, int close, string s)
    {
        if(open==0 and close==0)  //if both got over
            v.push_back(s);
        
        if(open > 0) //we can choose open in all cases only except if open brackets are 0
            solve(open-1, close, s+'(');  //we choose open bracket so reduce the count of open bracket we can use further
        
        if(open < close) //we can choose closed bracket if there are already used open brackets more than already used closed brackets, i.e, currently available open brackets is less than currently available closed brackets
            solve(open, close-1, s+')');  //we choose closed bracket so reduce the count of closed bracket we can use further
    }
    vector<string> generateParenthesis(int n) {
         int open = n, close = n;  //initially we have n number of both open and closed brackets to use
        string s = "";
        
        solve(open, close, s);
        return v;
      
    }
};