class Solution {
public:

    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {

        vis[node] = 1;

        for(int it : adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

    int makeConnected(int z, vector<vector<int>>& arr) {

        int n=arr.size();
       if(z-1>n) return -1;
      vector<vector<int>>adj(z);

        for(auto v : arr) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }

          int ans=0;
        vector<int>vis(z,0);

        for(int i=0;i<z;i++){
            if(!vis[i]){
                dfs(i,adj,vis); 
                ans++;  
            }
        }

        return ans-1;
    }
};