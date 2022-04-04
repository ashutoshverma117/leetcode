class Solution {
    int countsum(int i,int j,int n,int m,vector<vector<int>>& matrix,vector<vector<int>>&dp){
        // cout<<i<<j<<endl;
        if(i<0 || j<0 || i>n-1 || j>m-1)
            return INT_MAX;
        if(i==n-1)return matrix[n-1][j];
        if(dp[i][j]!=-1)return dp[i][j];
        else{
        
            int count1=countsum(i+1,j-1,n,m,matrix,dp);
            int count2=countsum(i+1,j,n,m,matrix,dp);
            int count3=countsum(i+1,j+1,n,m,matrix,dp);
            int ans=matrix[i][j]+min(min(count1,count2),count3);
            // cout<<count1<<endl;
            return dp[i][j]=ans;
        }
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int minimum=INT_MAX;
        // cout<<n<<m<<endl;
        for(int j=0;j<m;j++){
            vector<vector<int>>dp(n,vector<int>(m,-1));
            minimum=min(countsum(0,j,n,m,matrix,dp),minimum);
        }
        return minimum;
        
    }
};