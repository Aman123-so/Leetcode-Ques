class Solution {
public:
static const int MOD = 1e9+7;

    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
     int mid= 0;
     int right=0;
     int totalswap=0;
     for(int num: nums){
        if(num<a){
            totalswap= (totalswap+mid +right)%MOD;

        }
         else if(num>=a && num<=b) {
           totalswap= (totalswap+right)%MOD;
           mid++; 
        }
        else{
            right++;
        }

     }
     return totalswap;
    }
};