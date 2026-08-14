class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int> result(n - k + 1, -1);

        int count = 1;

        for(int j = 0; j < n; j++) {

            if(j > 0 && nums[j] == nums[j - 1] + 1) {
                count++;
            }
            else {
                count = 1;
            }

            if(count >= k) {
                result[j - k + 1] = nums[j];
            }
        }

        return result;
    }
};