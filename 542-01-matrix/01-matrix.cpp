class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

        int n=mat.size();
        int m=mat[0].size();
         vector<vector<int>> ans(n,vector<int>(m,0));
        
        vector<vector<int>>vis(n,vector<int>(m,0));

        queue<pair<pair<int,int>,int>>q;
       
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                ans[i][j]=0;
                vis[i][j]=1;
                q.push({{i,j},0});
            }
        }
    }

       int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        int tm = 0;
        

        while(!q.empty()) {

            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();

            tm = max(tm, t);

            for(int k = 0; k < 4; k++) {

                int nr = r + drow[k];
                int nc = c + dcol[k];

                if(nr >= 0 && nr < n &&  nc >= 0 && nc < m &&
                   mat[nr][nc] == 1 &&  !vis[nr][nc]) {
                
                    vis[nr][nc] = 1;
                    q.push({{nr, nc}, t + 1});
                    ans[nr][nc]=t+1;
                }
            }
        }

    return ans;
        
    }
};