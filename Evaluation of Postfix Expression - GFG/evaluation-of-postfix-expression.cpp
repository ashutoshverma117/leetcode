// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int>stk;
        for(int i=0;i<S.length();i++){
            if(S[i]>='0' && S[i]<='9'){
                stk.push(S[i]-'0');
            }
            else if(S[i]=='*' && !stk.empty()){
                int x=stk.top();
                stk.pop();
                int y=stk.top();
                stk.pop();
                int z=x*y;
                stk.push(z);
            }
             else if(S[i]=='+' && !stk.empty()){
                int x=stk.top();
                stk.pop();
                int y=stk.top();
                stk.pop();
                int z=y+x;
                stk.push(z);
            }
             else if(S[i]=='-' && !stk.empty()){
                int x=stk.top();
                stk.pop();
                int y=stk.top();
                stk.pop();
                int z=y-x;
                stk.push(z);
            }
             else{
                 if(!stk.empty()){
                int x=stk.top();
                stk.pop();
                int y=stk.top();
                stk.pop();
                int z=y/x;
                stk.push(z);}
            }
        }
        return stk.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends