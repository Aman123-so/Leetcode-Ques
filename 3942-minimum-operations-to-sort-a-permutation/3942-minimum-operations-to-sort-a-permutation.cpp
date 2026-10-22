class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n= nums.size();
        int acs_cnt= 0;
        int dec_cnt=0;

        for(int i=1; i<n; i++){
            acs_cnt+= (nums[i] == (nums[i-1]+1)%n);
            dec_cnt += (nums[i-1]== (nums[i]+1)%n);
        }
        if( acs_cnt == n-1 && nums[0]==0){
            return 0;
        }
        if( acs_cnt==n-1){
            int left_rotate= n- nums[0];
            int right_rotate= (nums.back()+1 )+2;
            return   min(left_rotate, right_rotate);
        }
        if( dec_cnt==n-1){
            int left_rotate= n- nums.back()+1;

            int right_rotate= (nums[0]+1)%n +1;
            return min( right_rotate,left_rotate );
        }
        return -1;
    }
};