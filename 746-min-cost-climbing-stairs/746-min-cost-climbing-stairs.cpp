class Solution {
    int countmin(int i,int n,vector<int>& cost,vector<int>&dp){
        if(i>n-1)return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=min(countmin(i+1,n,cost,dp)+cost[i],countmin(i+2,n,cost,dp)+cost[i]);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        int minimum=INT_MAX;
        for(int i=0;i<2;i++){
           minimum=min(countmin(i,n,cost,dp),minimum);
        } 
         return minimum;    
        
    }
};