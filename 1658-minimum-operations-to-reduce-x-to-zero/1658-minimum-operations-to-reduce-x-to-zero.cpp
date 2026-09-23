class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n= nums.size();
        int total=0;
        for(int i=0;i<n; i++){
            total+= nums[i];

        }
        int target= total-x;
        if(target<0){
            return -1;
        }
        if(target==0){
            return n;
        }

        int i=0;
        int j=0;
        int sum=0;
        int maxlen=-1;

        while(j<n){
            sum+= nums[j];
        while(sum> target){
                sum-= nums[i];
                i++;
            }
            if(sum==target){
                maxlen= max(maxlen, j-i+1);
            }
            j++;
        }
        if(maxlen==-1){
            return -1;
        }
        return n-maxlen;
    }
};