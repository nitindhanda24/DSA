class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int n=nums.size();
        int cnta=1,ansa=1;
        int cntb=1,ansb=1;

        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]>0){
                cnta++;
                 ansa=max(ansa,cnta);
            }else{
                cnta=1;
            }
        }

          for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]<0){
                cntb++;
                 ansb=max(ansb,cntb);
            }else{
                cntb=1;
            }
        }

    return max(ansa,ansb);
        
    }
};