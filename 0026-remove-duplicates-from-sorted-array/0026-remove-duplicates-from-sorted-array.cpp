class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
       int i=0,j=1;
       int k=0;
       while(j<n){

        if(nums[i]!= nums[j]){
            
            k++;
            i++;
            nums[i]=nums[j];
        }
                j++;
       }
       return k+1;
            
        }
    
};