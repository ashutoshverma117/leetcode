class Solution {
public:
    bool check(vector<char>v){
        int n=v.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            if(v[l++]!=v[h--])
                return 0;
        }
        return 1;
    }
    bool isPalindrome(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')
                continue;
            else if(s[i]>='A' && s[i]<='Z')
             v.push_back(tolower(s[i]));
            else if(s[i]>='a' && s[i]<='z')
                v.push_back(s[i]);
            else if(s[i]>='0' && s[i]<='9')
                v.push_back(s[i]);
            else
               continue;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        if(check(v))
            return true;
        else 
            return false;
        
        
    }
};