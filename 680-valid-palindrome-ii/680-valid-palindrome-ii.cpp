class Solution {
   bool ispalandrome(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int i=0;
        int n=s.length();
        int j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                if(ispalandrome(i,j-1,s)||ispalandrome(i+1,j,s))
                    return true;
                else
                    return false;
               
            }
             i++;
             j--;
        }
        return true;;
    }
};