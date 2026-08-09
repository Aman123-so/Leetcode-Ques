class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minKposition=-1;
        int maxKposition=-1;
        int culpritidx=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] <minK || nums[i]>maxK)
            culpritidx=i;
            if(nums[i]==minK)
            minKposition=i;
            if(nums[i]==maxK)
            maxKposition=i;
            long long smaller= min(minKposition, maxKposition);
            long long temp= smaller- culpritidx;
            ans+= (temp<0)?0:temp;
        }
        return ans;
    }
};