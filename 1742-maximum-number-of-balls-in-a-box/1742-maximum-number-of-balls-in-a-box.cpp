class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>m;
        int ans=0;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int sum=0;
            int t=i;
            while(t) {
                sum+=t%10;
                t=t/10;
            }
            m[sum]++;
            ans=max(ans,m[sum]);
        }
        return ans;
        
    }
};