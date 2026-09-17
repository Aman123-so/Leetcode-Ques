class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
        int totalSum=0;
        for(int i=0; i<n; i++){
            totalSum+= nums[i];
        }
        vector<int >ans;
        int leftSum=0;

        for(int i=0;  i<n; i++){
            int rightSum= totalSum - leftSum - nums[i];

            ans.push_back(abs(rightSum- leftSum));

            leftSum += nums[i];
        }
        return ans;

    }
};