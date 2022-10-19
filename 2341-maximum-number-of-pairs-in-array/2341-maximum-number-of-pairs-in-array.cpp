class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto it:nums)
        {
            m[it]++;
        }
        int pair=0,left=0;
        for(auto it:m)
        {
            pair+=it.second/2;
            left+=it.second%2;
        }
        return { pair,left };
    }
};