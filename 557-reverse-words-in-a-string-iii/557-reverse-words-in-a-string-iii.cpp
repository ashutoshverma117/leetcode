class Solution {
public:
    string reverse(string s){
        int i=0;
        int n=s.size();
        int j=n-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
    string reverseWords(string s) {
        int n=s.size();
        string k="";
        string p="";
         
        for(int i=0;i<n;i++){
           
            if(s[i]!=' '){
                k=k+s[i];
            }
            else{
               
                p=p+reverse(k);
                 p=p+' ';
                k="";
            }
             if(i==n-1){
                p=p+reverse(k);
            }
            
        }
        return p;
    }
};