// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool compare(Item a,Item b){
        return ((double)a.value/(double)a.weight)>((double)b.value/(double)b.weight);
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,compare);
        double sum=0;
        int i=0;
        double val=0;
        while(sum<W &&i<n){
            if(arr[i].weight+sum>W){
                double k=W-sum;
                sum=sum+k;
                val+=(k/arr[i].weight)*arr[i].value;
                return val;
            }
            sum=sum+arr[i].weight;
            val=val+arr[i++].value;
        }
        // if(sum>W){
            // int k=sum-W;
            
        //}
        return val;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends