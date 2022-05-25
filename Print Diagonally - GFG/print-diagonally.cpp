// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
	    vector<int>v;
	    for(int k=0;k<n;k++){
	        int i=0;
	        int j=k;
	        while(j>=0){
	            v.push_back(A[i][j]);
	            i=i+1;
	            j=j-1;
	        }
	    }
	    for(int k=1;k<n;k++){
	        int i=k;
	        int j=n-1;
	        while(i<=n-1){
	            v.push_back(A[i][j]);
	            i=i+1;
	            j=j-1;
	        }
	    }
	    return v;
	}

};

// { Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}
  // } Driver Code Ends