class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        vector<int>freq(26,0);

       for(char c:word){
            freq[c-'a']++;
       }
       sort(freq.rbegin(),freq.rend());
       int ans=0;
       int cnt=0;
       int x=1;

       for(int i=0;i<26;i++){
        cnt++;
        if(cnt>8){
            x++;
            cnt=1;
        }
        ans+=(x*freq[i]);
       }
        return ans;
        
    }
};