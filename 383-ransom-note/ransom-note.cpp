class Solution {
public:
    bool canConstruct(string x, string y) {

        int hash[26]={0};
        for(int i=0;i<x.length();i++){
            hash[x[i]-'a']++;
        }
        for(int i=0;i<y.length();i++){
            hash[y[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(hash[i]>0){
                return false;
            }
        }
    return true;
        
    }
};