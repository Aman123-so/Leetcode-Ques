class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int low = 0, res = 0;

        for (int high = 0; high < s.size(); high++) {
            if (mp.find(s[high]) != mp.end()) {
                low = max(low, mp[s[high]] + 1);
            }

            mp[s[high]] = high;
            res = max(res, high - low + 1);
        }

        return res;
    }
};