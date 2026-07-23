class Solution {
public:

     void bfs(int r,int c,vector<vector<int>>& image,vector<vector<int>>&vis,int sr,int sc,int color){
         int n=image.size();
        int m=image[0].size();
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

                   if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==image[sr][sc] && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                    image[nrow][ncol]=color;
                   }
                }
            }   
    }



    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n=image.size();
        int m=image[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==sr && j==sc){
                    bfs(i,j,image,vis,sr,sc,color);
                    image[sr][sc]=color;
                }
            }
        }

        return image;
        
    }
};