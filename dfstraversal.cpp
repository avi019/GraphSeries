//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Graph {
    private:
    void dfsTraversal(int v,vector<int>adj[],vector<int>&dfs,vector<int>&vis)
    {
        vis[v]=1;
        dfs.push_back(v);
        for(auto val:adj[v])
        {
            if(!vis[val])
            {
                dfsTraversal(val,adj,dfs,vis);
            }
        }
        
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int>dfs;
    vector<int>vis(V,0);
    dfsTraversal(0,adj,dfs,vis);
    return dfs;
    
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
        // string s1;
        // cin>>s1;
        Graph obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends