class Solution {
public:
    int countElements(vector<int>& arr, int k) {

        int n=arr.size();
        sort(arr.begin(),arr.end());
        map<int,int>mp;
        vector<int>temp(n,0);
        int cnt=1;
        int x=0;

        for(int i=n-2;i>=0;i--){
           if(arr[i]!=arr[i+1]){
                x=cnt;
           }
           temp[i]=x;
           cnt++;
        }

        int ans=0;

        for(int i=0;i<n;i++){
            if(temp[i]>=k) ans++;
        }
        return ans;
 
    }
};