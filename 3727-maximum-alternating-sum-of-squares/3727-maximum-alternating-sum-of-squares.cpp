class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n= nums.size();
        vector<int>vector;
        for(int i=0;i<n;i++){
            vector.push_back(1LL * nums[i]* nums[i]);
        }
        sort(vector.begin(), vector.end());
         long long ans=0;

         for(int i=0;i<n;i++){
            if(i<n/2){
                ans-=vector[i];

            }
            else{
                ans+= vector[i];
            }
         }
        
        return ans;
    }
};