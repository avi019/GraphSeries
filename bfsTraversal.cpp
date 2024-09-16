
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Graph {
  public:
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>bfs;
        vector<int>vis(V,0);
       queue<int>q;
       q.push(0);
       vis[0]=1;
       while(!q.empty())
       {
           int v=q.front();
           bfs.push_back(v);
           q.pop();
           for(auto val:adj[v])
           {
               if(!vis[val]){
               q.push(val);
               vis[val]=1;
               }
           }
           
           
       }
   return bfs;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin>>V>>E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
           
        }
  
        Graph obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
