class Solution {
    int count(int n,vector<int>&prices,vector<int>&dp){
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=max(count(n-1,prices,dp)+prices[n]-prices[n-1],count(n-1,prices,dp));
        
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>dp(n+1,-1);
        return count(n-1,prices,dp);
        
    }
};