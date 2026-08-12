class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        // Total number of 1s
        int totalOne = accumulate(nums.begin(), nums.end(), 0);

        if (totalOne <= 1) return 0;

        // Circular array ko simulate karne ke liye
        vector<int> temp(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            temp[i] = nums[i % n];
        }

        int i = 0;
        int currOne = 0;
        int maxCount = 0;

        for (int j = 0; j < 2 * n; j++) {

            // Current element window mein add
            if (temp[j] == 1) {
                currOne++;
            }

            // Window size totalOne se bada ho gaya
            if (j - i + 1 > totalOne) {
                if (temp[i] == 1) {
                    currOne--;
                }
                i++;
            }

            maxCount = max(maxCount, currOne);
        }

        // Total 1s - maximum 1s already together
        return totalOne - maxCount;
    }
};