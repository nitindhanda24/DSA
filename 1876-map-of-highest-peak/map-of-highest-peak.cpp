class Solution {
public:

    


    vector<vector<int>> highestPeak(vector<vector<int>>& is) {

        int n=is.size();
        int m=is[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
         vector<vector<int>>ans(n,vector<int>(m,0));
         queue<pair<pair<int,int>,int>>q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(is[i][j]==1){
                   ans[i][j]=0;
                   vis[i][j]=1;
                   q.push({{i,j},0});
                }
            }
        }
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};

          while(!q.empty()) {

            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();

    
            for(int k=0; k<4;k++) {

                int nr =r+drow[k];
                int nc =c+dcol[k];

                if(nr >= 0 && nr < n &&  nc >= 0 && nc < m &&
                   is[nr][nc] == 0 &&  !vis[nr][nc]) {
                
                    vis[nr][nc] = 1;
                    q.push({{nr, nc}, t + 1});
                    ans[nr][nc]=t+1;
                }
            }
        }

        return ans;
        
    }
};