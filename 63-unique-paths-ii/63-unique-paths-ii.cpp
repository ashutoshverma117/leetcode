class Solution {
    int count(int i,int j,int n,int m,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
          if(i==n-1 && j==m-1 && obstacleGrid[i][j]!=1)
            return 1;
        if(i>n-1 || j>m-1 || obstacleGrid[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        else{
            return dp[i][j]=count(i+1,j,n,m,obstacleGrid,dp)+count(i,j+1,n,m,obstacleGrid,dp);
        }
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
         return count(0,0,n,m,obstacleGrid,dp);
        
    }
};