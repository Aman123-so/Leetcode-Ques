class Solution {
public:
    int findMin(vector<int>& nums) {
    int n= nums.size();
    int l= 0; // l= left;
    int h=n-1; //h= high;

    while(l<h){
        int mid = l+ (h-l)/2;
        if(nums[mid]>nums[h]){
            l= mid+1;

        }
        else if( nums[mid]< nums[h]){
            h= mid;

        }
        else {
            h--;
        }
    }   
    return nums[l];   
    }
};