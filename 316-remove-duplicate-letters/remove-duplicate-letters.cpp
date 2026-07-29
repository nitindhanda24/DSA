class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        stack<char>st;
        string p;
        vector<int>freq(26, 0);
        vector<bool> check(26, false);
        for (char c:s) {
        freq[c-'a']++;
            }

            for (char c:s) {
                  freq[c-'a']--;

                  if(check[c-'a']==false){
                  
            while(!st.empty() && st.top()-'a'>c-'a'){

                if(freq[st.top()-'a']>0  ){
                    check[st.top()-'a']=false;
                    st.pop();
                }  else{
                    break;
                }
            }
               
                st.push(c); 
               }
                
                check[c-'a']=true;
        }

        while(!st.empty()){
            p+=st.top();
            st.pop();
        }
        reverse(p.begin(),p.end());
    return p;
        
    }
};