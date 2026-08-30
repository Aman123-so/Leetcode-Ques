class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int n= nums.size();
       int maxIdx=0;
       int minIdx=0;
       for(int i=1; i<n; i++){
        if(nums[i]<nums[minIdx]){
            minIdx=i;
        }
        if(nums[i]>nums[maxIdx]){
            maxIdx=i;
        }
       }
         if(minIdx== maxIdx){
            return 1;
        }
        int left= min(maxIdx, minIdx);
        int right= max(maxIdx,minIdx);
      
        int option1 = right+1;
        int option2 = n-left;
        int option3= (left+1) + (n-right);
       return min({option1, option2, option3});
    }
};