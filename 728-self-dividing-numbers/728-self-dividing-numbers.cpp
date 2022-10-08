class Solution {
public:
    
    bool isSDN(int n) {
    int d;
    int num=n;
    while(num!=0)
    {
        d=num%10;
        if(d==0)
            return false;
        if(n%d!=0)
            return false;
        num=num/10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            if (isSDN(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
        
        
    }
};