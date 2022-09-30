#define ll long long
class Solution {
public:
    bool isPalindrome(int x) {
     if(x==0)
     {
         return true;
     }
        if(x<0||x%10==0)
        {
            return false;
        }
        ll temp=x;
        ll rev=0;
        while(temp!=0)
        {
            rev=rev*10;
            ll rem=temp%10;
            rev=rev+rem;

            temp=temp/10;
        }
        if(x==rev)
        {
            return true;
        }
        else{
            return false;
        }
        
        
    }
};