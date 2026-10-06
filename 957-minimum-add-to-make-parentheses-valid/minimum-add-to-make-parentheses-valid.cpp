class Solution {
public:
    int minAddToMakeValid(string s) {

        int n=s.size();
        int cnt=0;
        stack<char>st;
        int ans=0;

        for(int i=0;i<n;i++){

            if(s[i]==')'){
               if(cnt>0) cnt--;
               else ans++;
            }

            if(s[i]=='('){
                cnt++;
            }
        }

        return ans+cnt;
        
    }
};