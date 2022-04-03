class Solution {
    int minsum(int i,int j,int n,int m,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        //if(i==n-1)return triangle[i][j];
        if(i>n-1)return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        else{
         return dp[i][j]=triangle[i][j]+min(minsum(i+1,j,n,m,triangle,dp),minsum(i+1,j+1,n,m,triangle,dp));
    }        
        }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[n-1].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return minsum(0,0,n,m,triangle,dp);
        
    }
};