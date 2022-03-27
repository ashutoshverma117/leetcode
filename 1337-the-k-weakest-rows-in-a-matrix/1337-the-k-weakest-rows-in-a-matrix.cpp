class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v;
        vector<int>l;
        int count=0;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                    count++;
            }
            v.push_back(make_pair(count,i));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(k!=0){
                l.push_back(v[i].second);
                k--;
            }
        }
        return l;
    }
};