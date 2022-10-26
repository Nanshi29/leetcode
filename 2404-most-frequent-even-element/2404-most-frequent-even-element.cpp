class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
               int res = -1 , count = 0;
        map<int,int> mp;
        for(auto it : nums)
            mp[it]++;
        for(auto it : mp){
            if(it.first%2==0){
                if(it.second>count){
                count = max(count,it.second);
                res = it.first;
            }
          }
        }
        return res ;

    }
};