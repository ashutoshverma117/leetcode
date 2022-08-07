class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int up=0;
        int down=row-1;
        int left=0;
        int right=col-1;
        vector<int>result;
        while(result.size()<col*row){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[up][i]);
            }
            for(int j=up+1;j<=down;j++){
                result.push_back(matrix[j][right]);
            }
            if(up!=down){
              for(int i=right-1;i>=left;i--){
                  result.push_back(matrix[down][i]);
              }  
            }
            if(left!=right){
                for(int j=down-1;j>up;j--){
                    result.push_back(matrix[j][left]);
                }
            }
            up++;
            down--;
            left++;
            right--;
        }
        return result;
    }
};