class Solution {
public:

   int dfs(int head, vector<vector<int>>&adj, vector<int>& time){
    int mx=0;
    for(auto it:adj[head]){
        mx=max(mx,dfs(it,adj,time));
    }
    return time[head]+mx;
   }



    int numOfMinutes(int n, int headID, vector<int>& man, vector<int>& time) {

          vector<vector<int>>adj(n);

        for(int i=0;i<n;i++){
            if(man[i]!=-1){
            adj[man[i]].push_back(i);
        }
        }

        return dfs(headID,adj,time);
        
    }
};