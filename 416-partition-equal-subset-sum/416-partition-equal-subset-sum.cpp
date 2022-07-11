class Solution {
public:
    bool solve(int n,vector<int>& nums,int sum,vector<vector<int>>&dp){
        if(n<0 || sum<0)
            return false;
        if(sum==0)
            return true;
        if(dp[n][sum]!=-1)return dp[n][sum];
        return dp[n][sum]=solve(n-1,nums,sum-nums[n],dp)||solve(n-1,nums,sum,dp);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0)
            return false;
        vector<vector<int>>dp(n+1,vector<int>(sum/2+1,-1));
        return solve(n-1,nums,sum/2,dp);
        
    }
};