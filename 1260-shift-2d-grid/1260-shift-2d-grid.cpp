class Solution {
    void reverse(int l,int h,vector<vector<int>>&grid){
        while(l<h){
            swap(grid[l/grid[0].size()][l%grid[0].size()],grid[h/grid[0].size()][h%grid[0].size()]);
                l++;
            h--;
        }
    }
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int l=0;
        int h=n*m-1;
        k = k%(h+1);
        reverse(l,h-k,grid);
        reverse(h-k+1,h,grid);
        reverse(l,h,grid);
       return grid; 
    }
    
};