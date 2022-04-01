class Solution {
    int count(int n,int dp[]){
        if(n==0)return 1;
        if(n<0)return 0;
        if(dp[n]!=-1)
            return dp[n];
        else{
        return dp[n]=count(n-1,dp)+count(n-2,dp);
        }
    }
public:
    int climbStairs(int n) {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return count(n,dp);
    }
};