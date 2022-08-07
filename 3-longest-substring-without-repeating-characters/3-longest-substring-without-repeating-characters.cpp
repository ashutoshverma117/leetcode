class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1);
        int start=-1;
        int maxlen=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(v[s[i]]>start){
                start=v[s[i]];
            }
            v[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};