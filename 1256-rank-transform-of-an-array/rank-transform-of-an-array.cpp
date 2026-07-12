class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>brr;

        for(int i=0;i<n;i++){
            brr.push_back(arr[i]);
        }
        sort(brr.begin(),brr.end());
        map<int,int>mp;
    int cnt=0;
        for(int i=0;i<n;i++){
            if(mp.find(brr[i])==mp.end()){
                cnt++;
                 mp.insert({brr[i],cnt});
            }
        }

        for(int i=0;i<n;i++){
          arr[i]=mp[arr[i]];
            
            }

        return arr;
        
    }
};