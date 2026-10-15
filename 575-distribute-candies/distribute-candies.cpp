class Solution {
public:
    int distributeCandies(vector<int>& arr) {

      set<int>st;
      int n=arr.size();

      for(int i=0;i<n;i++){
        st.insert(arr[i]);
      }
      int x=st.size();

      return min(n/2,x);

        
    }
};