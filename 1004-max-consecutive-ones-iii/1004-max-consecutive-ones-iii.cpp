class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        int l=0; //l= left
        int r=0; //r= right
        int zero=0;
        int ans=0;
        while(r<n){
            if(nums[r]==0)
                zero++;

                while(zero>k){
                    if(nums[l]==0)
                        zero--;
                        l++;
                    
                }
                ans= max(ans, r-l+1);
                r++;
            
            
        }
        return ans;
    }
};