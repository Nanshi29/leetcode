class Solution {
public:
    double average(vector<int>& salary) {
      sort(salary.begin(),salary.end());
        double a=0;
        for(int i=1;i<salary.size()-1;i++)
        {
            a=a+salary[i];
        }
        double avg=a/(salary.size()-2);
        return avg;
          
    }
};