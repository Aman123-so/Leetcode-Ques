class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
       unordered_set<int>st;
       unordered_map<int , int>freq;
       int n= nums.size();
       int count =0;
       for(int i=0; i<n; i++){
        st.insert(nums[i]);
       }
       int c= st.size();
    
       int i=0; 
       int j=0;
       while(j<n){
        freq[nums[j]]++;
       while(freq.size()==c){
        count+= n-j;
        freq[nums[i]]--;
        if(freq[nums[i]]==0){
            freq.erase(nums[i]);
        }
        i++;
       }
            j++;
       
    }
      return count;     
    }
};