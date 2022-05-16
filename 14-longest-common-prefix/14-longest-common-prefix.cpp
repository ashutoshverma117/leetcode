class Solution {
    int len(vector<string>v,int n){
        int min=v[0].length();
        for(int i=0;i<n;i++){
            if(v[i].length()<min){
                min=v[i].length();
            }
        }
        return min;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string count="";
        int minimum=len(strs,n);
        for(int i=0;i<minimum;i++){
            char curr=strs[0][i];
            for(int j=1;j<n;j++){
                if(strs[j][i]!=curr)
                    return count;
            }
            count=count+curr;
        }
        return count;
    }
};