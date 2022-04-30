// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int mini(int A[],int l,int h){
        int n=h-l+1;
        while(l<=h){
            int mid=(l+h)/2;
            if(A[mid]<A[(mid+1)%n] && A[mid]<A[(mid-1+n)%n])
            return mid;
            else if(A[mid]>A[h])
            l=mid+1;
            else 
            h=mid-1;
        }
        return NULL;
        
    }
    int find(int A[],int l,int h,int key){
        while(l<=h){
            int mid=(l+h)/2;
            if(A[mid]==key)
            return mid;
            else if(A[mid]<key)
            l=mid+1;
            else
            h=mid-1;
        }
        return -1;
    }
    int search(int A[], int l, int h, int key){
        int ind=mini(A,l,h);
        int a=find(A,l,ind-1,key);
        int b=find(A,ind,h,key);
        if(a!=-1)
        return a;
        else if(b!=-1)
        return b;
        else
        return -1;
        
    }
    
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends