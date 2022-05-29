class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>matrixi(matrix.size(),vector<int>(matrix.size()));
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrixi[j][i]=matrix[i][j];
            }
        }
        matrix=matrixi;
        
    }
};