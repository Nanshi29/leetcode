class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            if((c>='a' && c<='z') || (c>='0' && c<='9'))
                x.push_back(c);
            if(c>='A' && c<='Z')
            {
                c='a'+(c-'A');
                x.push_back(c);
            }
                
        }
        string y=x;
        reverse(x.begin(),x.end());
        return x==y;
    }
};