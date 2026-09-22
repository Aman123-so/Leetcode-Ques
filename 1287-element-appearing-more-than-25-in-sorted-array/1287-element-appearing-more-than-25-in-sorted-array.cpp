class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
       int n=nums.size();

       for(int i =0; i< n; i++){
       int  cnt=1;
       int  j= i+1;
        while(j<n && nums[i]== nums[j]){
            cnt++;
            j++;
        }
        if(cnt*4>n){
            return nums[i];
        }
        i= j-1;
       } 
       return -1;
    }
};