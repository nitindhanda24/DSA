class Solution {
public:

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>ans;
        vector<int>arr;

       fnx(0,nums,arr,ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }

       void fnx(int x,vector<int>& nums,vector<int>&arr,set<vector<int>>&ans){

      if(arr.size()>1)  ans.insert(arr);
      if(x==nums.size()) return;

      for(int i=x;i<nums.size();i++){

        if(arr.empty() || nums[i] >= arr.back() ){

        arr.push_back(nums[i]);
        fnx(i+1,nums,arr,ans);
        arr.pop_back();

        }
    }
    }
};