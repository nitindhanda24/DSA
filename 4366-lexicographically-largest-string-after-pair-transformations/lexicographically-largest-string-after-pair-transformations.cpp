class Solution {
public:
    vector<string> largestString(vector<int>& nums) {

        int n = nums.size();
        vector<string> ans;

        for (int i = 0; i < n; i++) {
            int x = nums[i];
           char ch='a';
            string s="";

            while (x >= 1) {
                int last = x % 2;
                if (last == 1) {
                   s+=ch;
                    x -= 1;
                }
                x /= 2;
                ch++;

                if (ch =='z')
                    break;
            }

          
            while (x--) {
                s+='z';
            }

            reverse(s.begin(), s.end());

            ans.push_back(s);
        }

        return ans;
    }
};