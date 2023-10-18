//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

      bool help(int node,vector<int> adj[],vector<int> &vis){
        if(vis[node]) return false;
        vis[node] = 1;
        for(auto it : adj[node]){
            if(help(it,adj,vis)==false) return false;
        }
        vis[node]=0;
        return true;
    }
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> ret;
        vector<int> vis(V,0);
        for(int i=0; i<V; i++){
            if(help(i,adj,vis)) ret.push_back(i);
        }
            
        return ret;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends