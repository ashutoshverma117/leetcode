// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    queue<int>qt;
    stack<int>stk;
    queue<int>qte;
    int i=0;
    while(i<k){
        stk.push(q.front());
        q.pop();
        i++;
    }
    while(!q.empty()){
        qt.push(q.front());
        q.pop();
    }
    while(!stk.empty()){
        qte.push(stk.top());
        stk.pop();
    }
    while(!qt.empty()){
        qte.push(qt.front());
        qt.pop();
    }
    return qte;
    
}