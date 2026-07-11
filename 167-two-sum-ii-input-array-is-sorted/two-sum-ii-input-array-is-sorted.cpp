class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int n=arr.size();
        int l=0;
        int r=n-1;
        vector<int>ans;

        while(l<r){

            if(arr[l]+arr[r]==target){
                ans.push_back(l+1);
                ans.push_back(r+1);
               break;
            }
            while(arr[l]+arr[r]>target){
                r--;
            }
            while(arr[l]+arr[r]<target){
                l++;
            }
        }
       return ans;
        
    }
};