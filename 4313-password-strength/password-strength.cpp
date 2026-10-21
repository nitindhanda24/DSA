class Solution {
public:
    int passwordStrength(string arr) {

        unordered_map<char,int>mp;
        int ans=0;

        for(char c:arr){
            mp[c]++;
        }

        for(auto it:mp){
            char c=it.first;

            if(c>='a' && c<='z') ans+=1;
            else if(c>='A' && c<='Z') ans+=2;
            else if(c>='0' && c<='9') ans+=3;
            else ans+=5;
        }

        return ans;



        

        
        
    }
};