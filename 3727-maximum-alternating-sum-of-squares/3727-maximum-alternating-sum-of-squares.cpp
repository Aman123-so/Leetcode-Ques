class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
    
        vector<long long> squares;

        for (int i = 0; i < n; i++) {
            squares.push_back(1LL * nums[i] * nums[i]);
              }

          sort(squares.begin(), squares.end());
             long long ans=0;
            for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                ans -= squares[i];
            } else {
                ans += squares[i];
            }
        }

        return ans;
    }
};