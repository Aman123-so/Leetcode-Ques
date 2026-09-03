class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int min = *min_element(nums1.begin(), nums1.end());
       for(int x: nums1){
        if(x%2 != min%2){
            return min%2==1;
        }
       } 
       return true;
    }
};