class Solution {
public:

      int fnx(int ind,int x,vector<int>&arr,vector<vector<int>>&dp){
        
        if(x==0) return 0;
        if(ind==0){
            if(x%arr[ind]==0) return x/arr[ind];
            else return 1e9;
        }

        if (dp[ind][x] != -1) return dp[ind][x];

            int take=INT_MAX;
            if(arr[ind]<=x){
                take=1+fnx(ind,x-arr[ind],arr,dp);
            }
            int not_take=fnx(ind-1,x,arr,dp);

            return dp[ind][x]= min(take,not_take);
            
        }
    
    int numSquares(int n) {
               
        vector<int>arr;
         for(int i=1;i*i<=n;i++){
            arr.push_back(i*i);
        }
        vector<vector<int>>dp(arr.size(),vector<int>(n+1,-1));
        
       
        return fnx(arr.size()-1,n,arr,dp);
        
    }
};