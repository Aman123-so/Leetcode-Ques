class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
           int ans = INT_MAX;

        for(int i=0; i<3; i++){
            int x= nums2[0]- nums1[i];
            int j=i; 
            int k=0;
        
        while(j <nums1.size()&& k<nums2.size()){
            if(nums1[j]+x== nums2[k]){
                j++;
                k++;
            }
            else{
                j++;
            }
           
            }
             if(k==nums2.size()){
                ans= min(ans,x);
             }
        }
        return ans;
    }
};