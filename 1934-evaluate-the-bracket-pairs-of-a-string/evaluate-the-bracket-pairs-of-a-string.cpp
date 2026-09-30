class Solution {
public:
    string evaluate(string s, vector<vector<string>>& know) {

        int n=s.length();
        int m=know.size();
        unordered_map<string,string>mp;

        for(auto & it:know){
            mp[it[0]]=it[1];
        }

       string x="";
       string ans="";
       bool flag=false;

        for(char c:s){
            if(c=='('){
                flag=true;
            }
            else if (c==')'){
                if(mp.find(x)!=mp.end()){
                    ans+=mp[x];
                }else{
                    ans+="?";
                }
                flag=false;
                x="";
            }

            else if(flag){
                x+=c;
            }else{
                ans+=c;
            }
        }
        return ans;
        
    }
};