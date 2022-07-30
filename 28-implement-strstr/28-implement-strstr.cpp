class Solution {
public:
    bool check(string s,string k){
        if(s==k)
            return true;
        else
            return false;
    }
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(m==0)
            return 0;
        for(int i=0;i<=n-m;i++){
            if(check(haystack.substr(i,m),needle))
                return i;
        }
        return -1;
        
    }
};