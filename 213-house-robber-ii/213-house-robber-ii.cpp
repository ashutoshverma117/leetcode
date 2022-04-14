class Solution {
    int count(int n,vector<int>nums,vector<int>&dp){
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        
        return dp[n]= max(count(n-2,nums,dp)+nums[n],count(n-1,nums,dp));
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
          if(n==1)
            return nums[0];
        vector<int>v;
        vector<int>k;
        vector<int>dp(n,-1);
        vector<int>dpi(n,-1);
        for(int i=0;i<n;i++){
            if(i!=0)v.push_back(nums[i]);
            if(i!=n-1)k.push_back(nums[i]);
        }
        return max(count(n-2,v,dp),count(n-2,k,dpi));
    }
};