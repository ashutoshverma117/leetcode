// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string d;
        d=d+S[0];
        for(int i=0;i<S.length();){
        while(S[i]==S[i+1]){
            i++;
        }
        if(S[i]!=S[i+1])
        d=d+S[i+1];
        i++;
        }
        return  d;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends