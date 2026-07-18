class Solution {
public:
    int findGCD(vector<int>& nums) {
        int sm= *min_element(nums.begin(),nums.end());
        int lg= *max_element(nums.begin(), nums.end());
        return gcd(sm, lg);
        }
    
};