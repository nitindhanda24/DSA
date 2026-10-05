class Solution {
public:
    int maxDepth(string s) {

        int n=s.size();
        stack<int>St;
        int ans=0;
        int cnt=0;

        for(int i=0;i<n;i++){
             if(s[i]==')'){
                cnt--;
            }
            if(s[i]=='('){
               cnt++;
            } 

            ans=max(ans,cnt);
        }

        return ans;

        }


};