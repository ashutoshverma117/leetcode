// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        map<int,int>mappi;
        int sum=0;
        int index=0;
        int maximum=0;
        for(int i=0;i<n;i++){
            sum=sum+A[i];
            if(sum==0)
            maximum=max(maximum,i+1);
            else
            {
            
            if(mappi.find(sum)!=mappi.end()){
                index=mappi[sum];
                maximum=max(maximum,i-index);
            }
            else
             mappi[sum]=i;
            }
        }
        return maximum;
        // Your code here
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends