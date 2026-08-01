class Solution {
public:

    int fnx(int i,int j,vector<int>& nums){
        if(i>j) return 0;

        int left=nums[i]-fnx(i+1,j,nums);
        int right=nums[j]-fnx(i,j-1,nums);

       return max(left,right);
  
    }

    bool predictTheWinner(vector<int>& nums) {
    
        int n=nums.size();
      int sum1= fnx(0,n-1,nums);

      if(sum1<0){
        return false;
      }else{
        return true;
      }

        
    }
};