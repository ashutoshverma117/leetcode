class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int k=0;
        int maximum=0;
        map<char,int>mappi;
        if(n==0)
            return 0;
        for(int i=0;i<n;i++){
            if(mappi.find(s[i])!=mappi.end() && mappi[s[i]]>=k){
                k=mappi[s[i]]+1;
            }
            mappi[s[i]]=i;
            maximum=max(maximum,i-k+1);
        }
        return maximum;
    }
};