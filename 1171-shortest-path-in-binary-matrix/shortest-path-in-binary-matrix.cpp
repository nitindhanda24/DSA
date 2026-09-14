class Solution {
public:


    int shortestPathBinaryMatrix(vector<vector<int>>& arr) {

        int n=arr.size();
       
        if(arr[0][0]==1 || arr[n-1][n-1]==1) {
            return -1;
        }

        vector<vector<int>>vis(n,vector<int>(n,1e9));
        vis[0][0]=1;

         priority_queue<
        pair<int, pair<int,int>>,
    vector<pair<int, pair<int,int>>>,
    greater<pair<int, pair<int,int>>>  > pq;
        pq.push({1,{0,0}});

       while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int cnt=it.first;
            int row=it.second.first;
            int col=it.second.second;

             if (row==n-1&&col==n-1)
                return cnt;

            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){

                    if (i == 0 && j == 0) continue;

                    int nrow=row+i;
                    int ncol=col+j;

                     if (nrow >= 0 && ncol >= 0 &&
                    nrow < n && ncol < n && arr[nrow][ncol]==0 )  {
                
                             int newcnt = cnt + 1;

                            if(newcnt<vis[nrow][ncol]){
                                vis[nrow][ncol]=newcnt;
                                pq.push({newcnt,{nrow,ncol}});
                            }
                        }

                }
            }

        }

    return -1;
        
    }
};