class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       int n= nums.size();
       unordered_set <int>st;
       long long sum=0;
       long long ans=0;
       //left= l and right=r
       int l=0;
       int r=0;
       while(r<n){
        while(st.find(nums[r]) != st.end()){
            st.erase(nums[l]);
            sum -= nums[l];
             l++;


        }
        st.insert(nums[r]);
        sum += nums[r];

        if(r-l+1==k){
            ans= max(ans,sum);

            st.erase(nums[l]);
            sum -= nums[l];
            l++;
        }
        r++;
       }
       return ans;
    }
};