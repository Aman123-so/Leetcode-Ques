class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // count[x] = kitni windows me x present hai
        vector<int> count(51, 0);

        // Har size-k window
        for (int i = 0; i <= n - k; i++) {

            // Ek window ke andar duplicate ko count nahi karna
            set<int> st;

            // Current window
            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            // Is window me jo unique elements hain
            // unka window-count badhao
            for (int x : st) {
                count[x]++;
            }
        }

        // Largest almost missing integer
        for (int x = 50; x >= 0; x--) {
            if (count[x] == 1) {
                return x;
            }
        }

        return -1;
    }
};