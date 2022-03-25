class Solution {
   static bool comparator(vector<int>&v,vector<int>&k){
        return (v[1]-v[0])>(k[1]-k[0]);
    }
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int sum=0;
        int sumi=0;
        int count=0;
        sort(costs.begin(),costs.end(),comparator);
        // for(auto x:costs){
        //     cout<<x[0]<<" "<<x[1]<<endl;
        // }
        for(auto x:costs){
            if(count<n/2){
                sum=sum+x[0];
                count++;
            }
            else{
                sumi+=x[1];
            }
        }
        return sum+sumi;
        
    }
};