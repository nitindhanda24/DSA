class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        string t;
        string ans;

       if(n%2!=0){
        char c=s[n/2];
        for(int i=0;i<(n/2);i++){
            t+=s[i];
        }
        sort(t.begin(),t.end());
        string z=t;
        reverse(z.begin(),z.end());
        ans+=t+c+z;
        
       }else{
         for(int i=0;i<(n/2);i++){
            t+=s[i];
        }
        sort(t.begin(),t.end());
        string z=t;
        reverse(z.begin(),z.end());
        ans+=t+z;

       }
        return ans;
    }
};