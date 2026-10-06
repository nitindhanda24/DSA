class Solution {
public:
    string getHint(string s, string g) {

        int n=s.size();
        int cnt0=0;
        int cnt1=0;
        unordered_map<int,int>mp;

        for(char c:s){
            mp[c]++;
        }

        for(int i=0;i<n;i++){

            if(s[i]==g[i]){
                 cnt0++;
                 mp[s[i]]--;
           } 
        }

            for(int i=0;i<n;i++){

                 if(s[i]!=g[i]) {
                if(mp.find(g[i])!=mp.end() && mp[g[i]]>0){
                    cnt1++;
                    mp[g[i]]--;
                }
            }

            }
           

        string ans="";
        ans+=(to_string(cnt0));
         ans+='A';
          ans+=(to_string(cnt1));
           ans+=('B');

        return ans;
        
    }
};