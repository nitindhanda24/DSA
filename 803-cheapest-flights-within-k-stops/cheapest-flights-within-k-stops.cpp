class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

          vector<vector<pair<int,int>>>adj(n+1);

        for(auto it :flights){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            adj[u].push_back({v,w});
        }
      vector<vector<int>>dist(k + 2, vector<int>(n, 1e9));
        dist[0][src]=0; 

         priority_queue<
        pair<int, pair<int,int>>,
    vector<pair<int, pair<int,int>>>,
    greater<pair<int, pair<int,int>>> > pq;
        pq.push({0,{src,0}});

       while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int dis=it.first;
            int node=it.second.first;
            int stop=it.second.second;


            if(node==dst){
                return dis;
            }
            if(stop>k){
                continue;
            }

            for(auto &it:adj[node]){
                  int adjnode=it.first;
                int wt=it.second;
              int newstop=stop+1;

              
                     if(dis+wt<dist[newstop][adjnode]){
                    dist[newstop][adjnode]=dis+wt;
                      pq.push({ dist[newstop][adjnode],{adjnode,newstop}});

                } 
            }
       }

       return -1;

        
    }
};