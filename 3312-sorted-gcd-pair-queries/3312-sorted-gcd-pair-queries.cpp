class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);
        for (int x : nums) freq[x]++;

        vector<long long> cnt(mx + 1, 0);

        // cnt[d] = pairs where both numbers are divisible by d
        for (int d = 1; d <= mx; d++) {
            long long c = 0;
            for (int j = d; j <= mx; j += d)
                c += freq[j];

            cnt[d] = c * (c - 1) / 2;
        }

        // Inclusion-Exclusion:
        // cnt[d] = pairs whose GCD is exactly d
        for (int d = mx; d >= 1; d--) {
            for (int j = 2 * d; j <= mx; j += d)
                cnt[d] -= cnt[j];
        }

        vector<long long> pref(mx + 1, 0);
        for (int i = 1; i <= mx; i++)
            pref[i] = pref[i - 1] + cnt[i];

        vector<int> ans;

        for (long long q : queries) {
            int l = 1, r = mx;
            while (l < r) {
                int mid = (l + r) / 2;
                if (pref[mid] > q)
                    r = mid;
                else
                    l = mid + 1;
            }
            ans.push_back(l);
        }

        return ans;
    }
};