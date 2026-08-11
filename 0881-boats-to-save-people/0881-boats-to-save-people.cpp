class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int boat=0;
        int i=0;
        int j=n-1;
        while(i<=j){
            if(nums[i]+nums[j] <= limit){
                i++;
                j--;
            }
            else{
                j--;
            }
            boat++;
        }
        return boat;
    }
};