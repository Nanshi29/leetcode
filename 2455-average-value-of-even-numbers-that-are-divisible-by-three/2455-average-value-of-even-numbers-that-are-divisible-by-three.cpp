class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0;
        int c=0;
       for(auto n:nums)
       {
           if(n%3==0 && n%2==0)
           {
               sum=sum+n;
               c++;
           }
       }
        return (c == 0) ? 0 : sum / c;
    }
};