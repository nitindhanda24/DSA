class Solution {
public:

      struct Compare {
        bool operator()(const pair<int, string>& a,
                        const pair<int, string>& b) {
            if (a.first == b.first) {
                return a.second > b.second;
            }
            return a.first < b.first;
        }
    };


    vector<string> topKFrequent(vector<string>& words, int k) {

        int n=words.size();
        unordered_map<string,int>mp;

        // lexico order ke liye
       priority_queue<pair<int, string>,
                       vector<pair<int, string>>,
                       Compare> pq;
        vector<string>ans;

        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }

        for(auto it:mp){

            pq.push({it.second,it.first});

        }
       while(!pq.empty() && k>0){

            string s=pq.top().second;
                ans.push_back(s);
            
            pq.pop();
            k--;
       
       }

       return ans;


    }
};