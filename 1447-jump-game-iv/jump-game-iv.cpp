class Solution {
public:

    int bfs(vector<int>& arr, int start,vector<bool>&vis){

         map<int,vector<int>>mp;
        int n=arr.size();

        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
        }

        int cnt=0;
        queue<int>q;
        q.push(start);
        vis[start]=true;

        while(!q.empty()){
            int size=q.size();

            while(size--){

            int node=q.front();
            q.pop();
            
            if(node==n-1){
             return cnt;
            }

           if(node+1>=0 && node+1<n && vis[ node+1]==false){
                    q.push(node+1);
                  vis[node+1]=true;
                }
          if(node-1>=0 && node-1<n && vis[ node-1]==false){
                     q.push(node-1);
                      vis[node-1]=true;
                }
            if(mp.find(arr[node])!=mp.end()){
                vector<int>t=mp[arr[node]];
                for(int i=0;i<t.size();i++){
                    if(vis[t[i]]==false){
                        q.push(t[i]);
                        vis[t[i]]=true;
                    }
                }
            mp.erase(arr[node]);
            }

            }
            cnt++;

            }
    
        return -1;
    }


    int minJumps(vector<int>& arr) {

       int n=arr.size();
        vector<bool>vis(n,false);

        return bfs(arr,0,vis);

        
    }
};