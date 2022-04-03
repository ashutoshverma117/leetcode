class Solution {
    int count(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i==n-1 && j==m-1)return grid[i][j];
        if(i>n-1 || j>m-1)
            return INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        else{
            int path1 = count(i+1,j,n,m,grid,dp);
            int path2 = count(i,j+1,n,m,grid,dp);
            int sum = min(path1,path2);
            sum+=grid[i][j];
        return dp[i][j]= sum;
        }

    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return count(0,0,n,m,grid,dp);
        
    }
};