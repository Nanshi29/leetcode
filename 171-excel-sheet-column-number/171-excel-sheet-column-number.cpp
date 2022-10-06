class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = (columnTitle[0] - 'A') + 1;
        for (int i = 1; i < columnTitle.size(); i++) {
            res *= 26;
            res += ((columnTitle[i] - 'A') + 1);
        }
        
        return res;
    }
};