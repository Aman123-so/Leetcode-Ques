class Solution {
public:
long long M= 1e9+7; 
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>sums;

      for(int i=0; i<n; i++ ) {
        int sum=0;
        for(int j=i; j<n ; j++){
            sum+= nums[j];
            sums.push_back(sum);
        }
      } 
      sort(sums.begin(), sums.end());
      int ans=0;
      for(int i= left-1; i<= right-1; i++){
        ans= (ans+ sums[i])%M;
      }
      return ans;
    }
};