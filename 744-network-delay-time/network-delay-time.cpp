class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {


        vector<vector<pair<int,int>>>adj(n+1);

        for(auto &it:times){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            adj[u].push_back({v,w});
        }

        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>>pq;

        vector<int>dist(n+1,1e9);

        dist[k]=0;
        pq.push({0,k});

        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int dis=it.first;
            int node=it.second;

            if(dis>dist[node]) continue;

            for(auto &it:adj[node]){
                int adjnode=it.first;
                int wt=it.second;

                if(dis+wt<dist[adjnode]){
                    dist[adjnode]=dis+wt;
                    pq.push({ dist[adjnode],adjnode});
                }
            }
        }

    int ans=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==1e9){
                return -1;
            }
            ans=max(ans,dist[i]);
        }

    return ans;

        
    }
};