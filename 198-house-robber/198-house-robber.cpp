class Solution {
    int sum(int n,vector<int>& nums,vector<int>&dp){
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=max(sum(n-2,nums,dp)+nums[n],sum(n-1,nums,dp));
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return sum(n-1,nums,dp);
        
    }
};