//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
 bool Cycle(int s, vector<int>adj[], vector<bool>&vis){
        queue<pair<int,int>>q;
        vis[s]=true;
        q.push({s,-1});
        
        while(!q.empty()){
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            
            for(auto x:adj[node]){
                if(!vis[x]){
                    vis[x]=true;
                    q.push({x,node});
                }
                else if(x!=par) {
                    return true;
                }
                   
            }
        }
            return false;
        
    }
    public:
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool>vis(V+1,false);
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                bool ans = Cycle(i,adj,vis);
                if(ans == true) return true;
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends