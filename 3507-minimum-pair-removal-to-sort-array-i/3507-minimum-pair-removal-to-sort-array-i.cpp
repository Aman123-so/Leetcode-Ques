class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
     
      int ans=0;
      while(true){
         int n= nums.size();
        bool sorted= true;
        for(int i=0; i<n-1; i++){
            if(nums[i]> nums[i+1]){
                sorted= false;
                break;
            }
        }
        if(sorted){
            return ans;
        }

      
        int idx=0;
        for(int i=1; i<n-1; i++){
            if(nums[i]+ nums[i+1]<nums[idx] + nums[idx+1]){
                idx= i;
            }
        }
        nums[idx]= nums[idx]+ nums[idx+1];
        nums.erase(nums.begin() + idx+1);
        ans++;
      }
    }
};