class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n=nums.size();
        int sum=0,len=0;
      unordered_map<int,int>mp;


        for(int i=0;i<n;i++){
          
          if(nums[i]==0){
            sum+=(-1);
          }else{
            sum+=1;
          }

          if(sum==0){
            len=i+1;
          } else if(mp.find(sum)!=mp.end()){
            len=max(len,i-mp[sum]);
          } else{
            mp[sum]=i;
          }
       
       }



       return len;

        
    }
};