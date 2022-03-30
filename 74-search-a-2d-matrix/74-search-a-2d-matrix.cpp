class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int h=m*n-1;
        while(l<=h){
            int mid=(l+h)/2;
            int row=(mid/m);
            int col=(mid%m);
            int val=matrix[row][col];
            if(val==target)
                return true;
            else if(val<target){
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return false;
        
    }
};