class Solution {
public:
    int minPairSum(vector<int>& nums) {
       int n= nums.size();
       sort(nums.begin(), nums.end());
       int res=0;
       int i=0;
       int j= n-1;
       while(i<j){
        int sum= nums[i]+ nums[j];
        res= max(res,sum);
        i++;
        j--;
       } 
       return res;
    }
};