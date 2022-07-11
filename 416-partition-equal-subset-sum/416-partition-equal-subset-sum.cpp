class Solution {
    bool sum(int n,int half,vector<int>&nums,vector<vector<int>>&dp){
        if(half==0)return 1;
        //if(n==0) {
            // if(half-nums[n]==0)return true;
            // else
            //     return false;
        //}
        if(n<0 || half<0)return false;
        if(dp[n][half]!=-1)
            return dp[n][half];
        bool a=sum(n-1,half-nums[n],nums,dp);
        bool b=sum(n-1,half,nums,dp);
        bool ans=a||b;
        if(ans){
            dp[n][half]=1;
            return true;
        }
        else{
            dp[n][half]=0;
            return false;
        }
    }
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sumi=0;
        for(int i=0;i<n;i++){
            sumi+=nums[i];
        }
        if(sumi%2!=0)
            return false;
        else{
        vector<vector<int>>dp(n+1,vector<int>(sumi/2+1,-1));
        return sum(n-1,sumi/2,nums,dp);
        }
        
    }
};