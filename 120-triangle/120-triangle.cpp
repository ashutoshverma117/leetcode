class Solution {
    int minsum(int i,int j,int n,int m,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        //if(i==n-1)return
        // cout<<i<<j<<endl;
        if(i>n-1)
            return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        else{
            int left=minsum(i+1,j,n,m,triangle,dp);
            int right=minsum(i+1,j+1,n,m,triangle,dp);
            int sum=min(left,right);
            sum+=triangle[i][j];
            return dp[i][j]=sum;
         //return dp[i][j]=triangle[i][j]+min(,);
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