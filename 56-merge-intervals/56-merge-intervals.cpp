class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<int>k=intervals[0];
        vector<vector<int>>l;
        for(auto x:intervals){
            if(x[0]<=k[1])
                k[1]=max(k[1],x[1]);
            else{
                l.push_back(k);
                k=x;
            }        
        }
        l.push_back(k);
        return l;
    }
};