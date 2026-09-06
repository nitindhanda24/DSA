class Solution {
public:
    int minBishopMoves(vector<int>& s, vector<int>& t) {

        int x=s[0]+s[1];
        int y=t[0]+t[1];

        if((x%2==0 && y%2==1)|| (x%2==1 && y%2==0)){
            return -1;
        }else{
            if(abs(s[0]-t[0])==abs(s[1]-t[1])){
                return 1;
             }else{
                return 2;
            }

        }
        
    }
};