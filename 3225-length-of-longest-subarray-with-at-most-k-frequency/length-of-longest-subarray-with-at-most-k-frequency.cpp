class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>freq;

        int i=0,j=0;
        int n=nums.size();
        int ans=1;

        while(j<n){
            freq[nums[j]]++;

           while(freq[nums[j]]>k){
            freq[nums[i]]--;
            i++;
           }
           ans=max(ans,j-i+1);
            j++;
        }

        return ans;
    }
};