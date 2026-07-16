class Solution {
public:
    long long gcdSum(vector<int>& arr) {

        int n=arr.size();
        vector<int>pg(n,0);
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
            pg[i]=gcd(mx,arr[i]);
        }
        long long sum=0;
        sort(pg.begin(),pg.end());
        for(int i=0;i<n/2;i++){
            sum+=gcd(pg[i],pg[n-i-1]);
        }
        return sum;
        
    }
};