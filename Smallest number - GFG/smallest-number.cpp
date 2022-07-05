// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        string st;
        if(D*9<S){
            st=st+"-1";
            return st;
        }
        int k=D;
        while(D>0){
            if(D*9-S>=9){
                if(D!=k){
                    st=st+'0';
                    D--;
                }
                else{
                st=st+'1';
                S=S-1;
                D--;
                }
            }
            else{
                int p=(9-(D*9-S));
                S=S-p;
                st=st+to_string(p);
                D--;
            }
        } 
        return st;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends