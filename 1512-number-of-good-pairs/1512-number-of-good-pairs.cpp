class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        int c=0;
            for(auto i:m)
            {
                int n=i.second;
                c+=n*(n-1)/2;
            }
        return c;
        
    }
};