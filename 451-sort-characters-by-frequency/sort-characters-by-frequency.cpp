class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int>mp;
       priority_queue<pair<int,char>>pq;
        string ans="";

        for(char c:s){
           mp[c]++;
        }
        for(auto it:mp){
           pq.push({it.second,it.first});
        }

        while(!pq.empty()){

           int cnt=pq.top().first;
           char ch=pq.top().second;
           pq.pop();

            ans.append(cnt, ch);
            
        }

       

        return ans;
        
    }
};