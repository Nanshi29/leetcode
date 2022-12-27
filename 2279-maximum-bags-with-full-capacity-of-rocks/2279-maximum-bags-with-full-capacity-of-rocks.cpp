class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int>required(n,0);
        for(int i=0;i<n;i++)
        {
            int currently_rock=rocks[i];
            int capacity_rock=capacity[i];
            int require_rock=capacity_rock-currently_rock;
            required[i]=require_rock;
        }
        sort(begin(required),end(required));
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(required[i]==0)
                count++;
            else {
                if(additionalRocks>=required[i]) {
                     additionalRocks-=required[i];
                     count++;
                }
                else {
                    break;
                }
        }
    }
            return count;
    }
};