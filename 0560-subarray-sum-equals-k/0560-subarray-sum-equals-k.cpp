class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int answer = 0;

        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            int needed = sum - k;

            answer += mp[needed];

            mp[sum]++;
        }

        return answer;
    }
};