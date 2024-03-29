// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>v={1,2,5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int>k;
        while(N!=0){
            for(int i=v.size()-1;i>=0;i--){
                if(N>=v[i]){
                    N=N-v[i];
                    k.push_back(v[i]);
                    break;
                }
            }
        }
        return k;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends