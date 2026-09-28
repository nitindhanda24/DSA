class Solution {
public:

    bool bfs(vector<int>& arr, int start,vector<bool>&vis){

        int n=arr.size();

        queue<int>q;
        q.push(start);
        vis[start]=true;

        while(!q.empty()){
            int node=q.front();
            q.pop();

            if(arr[node]==0) return true;

           if(node+arr[node]>=0 && node+arr[node]<n && vis[ node+arr[node]]==false){
                    q.push(node+arr[node]);
                  vis[node+arr[node]]=true;
                }
          if(node-arr[node]>=0 && node-arr[node]<n && vis[ node-arr[node]]==false){
                     q.push(node-arr[node]);
                      vis[node-arr[node]]=true;
                }
            }
    
        return false;
    }

    // bool dfs((vector<int>& arr, int start){

    // }

    bool canReach(vector<int>& arr, int start) {

        int n=arr.size();

        vector<bool>vis(n,false);
        
      return   bfs(arr,start,vis);
        
        
    }
};