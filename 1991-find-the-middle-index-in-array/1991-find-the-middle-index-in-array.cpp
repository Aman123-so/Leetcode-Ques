class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n; i++){
            int lfSum= 0;
            int rightSum= 0;
            for(int j=0;j<=i;j++){
                lfSum +=nums[j];
            }
            for(int j=i; j<n; j++){
                rightSum+= nums[j];
            }
            if(lfSum== rightSum){
                return i;
            }
        }
        return -1;
    }
};