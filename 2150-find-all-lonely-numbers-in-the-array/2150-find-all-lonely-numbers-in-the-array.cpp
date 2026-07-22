class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] - nums[i - 1] <= 1)
                continue;

            if (i < n - 1 && nums[i + 1] - nums[i] <= 1)
                continue;

            ans.push_back(nums[i]);
        }

        return ans;
    }
};