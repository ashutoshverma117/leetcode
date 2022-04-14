class Solution {
    int count(int n,vector<int>v,vector<int>&dp){
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=max(count(n-2,v,dp)+v[n],count(n-1,v,dp));
    }
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            k=max(nums[i],k);
        }
        vector<int>v(k+1,0);
        vector<int>dp(k+2,-1);
        for(auto x:nums){
            v[x]+=x;
        }
        return count(v.size()-1,v,dp);
    }
};