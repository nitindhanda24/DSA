class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.length();
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        vector<bool>check(26,false);
        stack<char>st;

        for(char c:s){
            freq[c-'a']--;
             if(check[c-'a']==false){

            while(!st.empty() && st.top()-'a'>c-'a'){
               if(freq[st.top()-'a']>0){
                 check[st.top()-'a']=false;
                st.pop();
               }else{
                break;
               }
            }
             st.push(c);
             }
             
            check[c-'a']=true;
           
        }

        string p;

        while(!st.empty()){
            p+=st.top();
            st.pop();
        }
        reverse(p.begin(),p.end());

        return p;
        
    }
};