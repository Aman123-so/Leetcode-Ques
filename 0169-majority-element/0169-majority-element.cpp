class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int cad=0;
       int  bal=0;
       for(int value:nums){
        if(bal==0){
            cad=value;

        }
        if(cad==value){
            bal++;
        }
            else{
                bal--;
            }
        
        }
        return cad;
    }
};