class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>m;
        for(vector<int>v:items1)
        {
            m[v[0]]+=v[1];
        }
        for(vector<int>v:items2)
        {
            m[v[0]]+=v[1];
        }
        vector<vector<int>>ans;
        for(auto x:m) {
            ans.push_back({x.first,x.second});
        }
        return ans;
            
        
    }
};