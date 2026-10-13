class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {

        int n=arr.size();

        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr[i]=(-arr[i]);
            }
        }

        int x=n/2;
       long long sum=0;

    sort(arr.begin(),arr.end());

    for(int i=0;i<x;i++){
        sum-=(arr[i]*arr[i]);
    }
    for(int i=x;i<n;i++){
        sum+=(arr[i]*arr[i]);
    }

    return sum;
        
    }
};