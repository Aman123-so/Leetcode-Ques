class Solution {
public:

// space optimization solution;
    int solve(vector<int>&nums, int start,int end){
        int n= end-start+1;
        vector<int> dp(n, -1);
        int prev= nums[start];
        int prev2= 0;
        for(int i =1;i<n; i++){
            int take= nums[start+i];
            if(i>1) take += prev2;

            int nottake= 0+ prev;
            int curr= max(take, nottake );
            prev2= prev;
            prev= curr;
        }
        return prev;

    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];

        int first= solve(nums, 1, n-1);
        int second= solve( nums, 0, n-2);

        return max(first, second);
    }
};