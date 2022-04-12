class Solution {
    int count(int i,int j,vector<vector<int>>v){
        int counti=0;
        if(i+1<v.size() && v[i+1][j]==1)
            counti++;
         if(j+1<v[0].size() && v[i][j+1]==1)
             counti++;
         if( i-1>=0 && v[i-1][j]==1 )
             counti++;
         if(j-1>=0 && v[i][j-1]==1 )
             counti++;
         if(i+1<v.size() && j+1<v[0].size() && v[i+1][j+1]==1)
             counti++;
         if(i+1<v.size() && j-1>=0 && v[i+1][j-1]==1 )
             counti++;
         if(i-1>=0 && j+1<v[0].size() && v[i-1][j+1]==1 )
             counti++;
         if( i-1>=0 && j-1>=0 &&v[i-1][j-1]==1 )
             counti++;
        
         return counti;
    }
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>v=board;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum=0;
                sum=count(i,j,v);
                if(sum<2 && board[i][j]==1)
                    board[i][j]=0;
                else if((sum==2||sum==3) && board[i][j]==1)
                    board[i][j]=1;
                else if(sum>3 && board[i][j]==1)
                    board[i][j]=0;
                else if(sum==3 && board[i][j]==0)
                    board[i][j]=1;
                
                // cout<<sum<<" ";
                
            }
        }
       
    }
};