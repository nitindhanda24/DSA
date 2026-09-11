class Solution {
public:
    long long countCommas(long long n) {

        if(n<1000) return 0;

      long long int ans=0;
      long long int x=1000;

       while(x<=n){
        ans+=(n-x+1);
        x*=1000;
       
       }

    return ans;
        
    }
};