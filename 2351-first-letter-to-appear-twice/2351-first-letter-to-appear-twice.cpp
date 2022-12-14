class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        for(char ch:s)
        {
            if(m.find(ch)!=m.end())
                return ch;
                m[ch]++;
        }
        return '0';
    }
};