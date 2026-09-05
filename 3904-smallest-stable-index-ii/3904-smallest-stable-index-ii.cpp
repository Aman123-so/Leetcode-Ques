class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int n= nums.size();
       
       vector<int>rightmn(n);
       rightmn[n-1]= nums[n-1];
         
         for(int i=n-2; i>=0; i--){
            rightmn[i]= min(rightmn[i+1], nums[i]);
         }
        int maximum=nums[0];
        for( int i=0; i<n;i++){
            maximum=max(maximum, nums[i]);
        
        int minimum= rightmn[i];
        if(maximum -minimum <=k){
            return i;
        }
       } 
       return -1;
    }
};