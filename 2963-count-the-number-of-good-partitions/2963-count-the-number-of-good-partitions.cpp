class Solution {
public:
    int M = 1e9 + 7;

    int numberOfGoodPartitions(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> last_idx;

        for(int i = 0; i < n; i++) {
            last_idx[nums[i]] = i;
        }

        int j = -1;
        int res = 1;

        for(int i = 0; i < n; i++) {

            if(i > j) {
                if(i != 0)
                    res = (res * 2) % M;
            }

            j = max(j, last_idx[nums[i]]);
        }

        return res;
    }
};