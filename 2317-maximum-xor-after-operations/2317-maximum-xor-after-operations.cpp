class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int y=0;
        for(auto x:nums)
            y|=x;
        return y;
        
        
    }
};