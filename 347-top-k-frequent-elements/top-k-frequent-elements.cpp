class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n=nums.size();
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        vector<int>ans;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        
        while(!pq.empty() && k>0){

            ans.push_back(pq.top().second);
            k--,pq.pop();
        }

        return ans;
        
    }
};