class Solution {
public:
    string mergeAlternately(string w1, string w2) {

        string ans="";

        int n1=w1.size();
        int n2=w2.size();

        int i=0,j=0;

        while(i<n1 && j<n2){
            ans+=w1[i];
            ans+=w2[j];
            i++,j++;
        }
        while(i<n1){
            ans+=w1[i];
            i++;

        }
        while(j<n2){
            ans+=w2[j];
            j++;
        }


        return ans;
        
    }
};