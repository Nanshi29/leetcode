typedef long long ll;
typedef pair<ll,ll> pi;
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<pi,vector<pi>,greater<pi>> pq;//for storing the starting candidates no of indexes
         priority_queue<pi,vector<pi>,greater<pi>>pq1;//for storing the ending candidates no of indexes
        int n=costs.size();
        int s,e;
        vector<int> vis(n,0);//for storing the visited indexes
        for(int i=0;i<min(n,candidates);i++)
        {
            pq.push({costs[i],i});
            vis[i]=1;
            s=i;
        }
        for(int j=n-1;j>=n-candidates;j--)
        {
            if(!vis[j])
            {
                pq1.push({costs[j],j});
                vis[j]=1;
                e=j;
            }
        }
        s++;
        e--;
        ll sum=0;
        while(k--)
        {
            if(!pq.empty() and !pq1.empty())
            {
                if(pq.top().first<pq1.top().first or pq.top().first==pq1.top().first)//if element at top pq is less than top of pq1
                //or if both the elements are same then we need to select from pq since index of pq will always be less than that
				//of pq1
				{
                sum+=pq.top().first;
                pq.pop();
                if(!vis[s])
                {
                    pq.push({costs[s],s});
                    vis[s]=1;
                    s++;
                   
                }
                 }
                else if(pq.top().first>pq1.top().first)
                {
                    sum+=pq1.top().first;
                    pq1.pop();
                    if(!vis[e])
                    {
                        pq1.push({costs[e],e});
                        vis[e]=1;
                        e--;
                    }
                }
            }
            else if(pq.empty())
            {
                sum+=pq1.top().first;
                pq1.pop();
            }
            else
            {
                sum+=pq.top().first;
                pq.pop();
            }
        }
        return sum;  
    }
};