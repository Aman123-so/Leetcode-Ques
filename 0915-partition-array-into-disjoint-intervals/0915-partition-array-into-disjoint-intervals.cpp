class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
       int n= nums.size() ;
       vector<int >rightmn(n);
       rightmn[n-1]= nums[n-1];
       for(int i=n-2; i>=0; i--){
        rightmn[i]= min(rightmn[i+1],nums[i]);

       }
       int leftmax= nums[0];
       for(int i=0; i<n; i++){
        leftmax= max(leftmax, nums[i]);

        if(leftmax <= rightmn[i+1]){
            return i+1;
        }
       }
       return -1;
    }
};