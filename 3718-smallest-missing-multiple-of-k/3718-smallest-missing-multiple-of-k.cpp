class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      unordered_set<int>st;
      int n= nums.size();
      for(int i=0; i<n;i++){
        st.insert(nums[i]);
      }
       int multiple=k;
        while(st.count(multiple)){
            multiple+=k;
        }
        return multiple;
       
    }
};