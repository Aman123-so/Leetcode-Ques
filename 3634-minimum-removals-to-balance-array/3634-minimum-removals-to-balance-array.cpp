class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int i=0;
        int j=0;
        int l=0;
        while(j<n){
           
            if((long long) nums[j]<=(long long)nums[i]  * k){
                 l= max(l,j-i+1);
                j++;
            }
            else{
            i++;
            }
        }
        return n-l;
        
    }
};