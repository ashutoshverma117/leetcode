class Solution {
    int count(int n,vector<int>nums,vector<int>&dp){
        if(n<0)return 0;
       // if(n==0)return nums[n];
        if(dp[n]!=-1)return dp[n];
        else{
        return dp[n]=max(nums[n]+count(n-2,nums,dp),count(n-1,nums,dp));
        }
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return count(n-1,nums,dp);
        
    }
};