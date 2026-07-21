class Solution {
public:

    void bfs(int r,int c,vector<vector<int>>& grid,vector<vector<int>>&vis){
         int n=grid.size();
        int m=grid[0].size();
       vis[r][c]=1;
        queue<pair<int,int>>q;
        q.push({r,c});

        int draw[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};

        while(!q.empty()){

            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
               
                  int  nrow=row+draw[i];
                   int ncol=col+dcol[i];

                   if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                   }
                }
            }   
    }


    int numEnclaves(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

           vector<vector<int>>vis(n,vector<int>(m,0));

           for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                if(!vis[i][j] && grid[i][j]==1 ){
                    bfs(i,j,grid,vis);
                }
            }
            }
           }
           int cnt=0;

           for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    cnt++;
                }
            }
           }
           
        return cnt;
    }
};