class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      unordered_set<char>st;
      for(char ch:allowed){
        st.insert(ch);
      }
      int ans=0;
      for(string word: words){
        bool consistent=true;
        for(char ch:word) {
            if(st.find(ch)==st.end()){
                consistent=false;
                break;
            }
        }
        if(consistent)
        ans++;
      }
      return ans;
    }
};