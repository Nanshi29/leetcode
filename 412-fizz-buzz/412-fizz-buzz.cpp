class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>v;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                v.push_back("FizzBuzz");
            }
            else if(i%3==0)
            {
                v.push_back("Fizz");
            }
            else if(i%5==0)
            {
                v.push_back("Buzz");
            }
            else {
                int number=i;
                string str=to_string(number);
                v.push_back(str);
                number=0;
            }
            
        }
        return v;
        
    }
};