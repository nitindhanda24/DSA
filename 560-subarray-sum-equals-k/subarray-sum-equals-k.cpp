class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();

        vector<int>arr(n,0);
        unordered_map<int,int>mp;
        mp[0]=1;

        arr[0]=nums[0];

        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]+nums[i];
        }

        int l=0,r=0,cnt=0;

        while(r<n){

            int z=arr[r]-k;

           if(mp.find(z)!=mp.end()){
            cnt+=mp[z];
           }

           mp[arr[r]]++;
           r++;
          
        }

        return cnt;
        
    }
};