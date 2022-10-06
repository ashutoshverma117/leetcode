class Solution {
public:
    int solve(vector<int>&cost,int i,int n,vector<int>&cut){
        if(i>n)
            return 0;
        if(i==n)
            return 0;
        if(cut[i]!=-1){
            return cut[i];
        }
        return cut[i]=min(solve(cost,i+1,n,cut)+cost[i],solve(cost,i+2,n,cut)+cost[i]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        vector<int>dp1(n,-1);
        return min(solve(cost,0,n,dp),solve(cost,1,n,dp1));
    }
};