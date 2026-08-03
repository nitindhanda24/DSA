class Solution {
public:

      int fnx(int i,int j,vector<int>& arr,vector<vector<int>>&dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        int left=arr[i]-fnx(i+1,j,arr,dp);
        int right=arr[j]-fnx(i,j-1,arr,dp);

       return dp[i][j]= max(left,right);
  
    }


    bool stoneGame(vector<int>& arr) {

        int n=arr.size();
         vector<vector<int>>dp(n,vector<int>(n,-1));
      int sum1= fnx(0,n-1,arr,dp);
    
      if(sum1<0){
        return false;
      }else{
        return true;
      }
        
    }
};