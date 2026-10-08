class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>st;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

         for(int i=0;i<n;i++){
            if(mp[nums[i]]>1){
                st.push_back(nums[i]);
                 mp[nums[i]]--;
            }
         }
    return st;
        
    }
};