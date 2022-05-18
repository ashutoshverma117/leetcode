class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mappi;
        vector<vector<string>>p;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string copy=strs[i];
            sort(copy.begin(),copy.end());
            mappi[copy].push_back(strs[i]);
        }
        for(auto x:mappi){
            p.push_back(x.second);
        }
        return p;
        
    }
};