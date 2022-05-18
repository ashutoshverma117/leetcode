class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int j=0;
        int maximum=INT_MIN;
        int maxrepeat=0;
        map<char,int>mappi;
        for(int i=0;i<n;i++){
             mappi[s[i]]++;
            maxrepeat=max(maxrepeat,mappi[s[i]]);
            if(i-j+1-maxrepeat>k){
                mappi[s[j]]--;
                j++;
            }
              maximum=max(maximum,i-j+1);
        }
        return maximum;
    }
};