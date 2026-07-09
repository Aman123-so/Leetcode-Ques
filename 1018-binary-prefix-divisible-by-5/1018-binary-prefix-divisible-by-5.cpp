class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        int rem=0;
    
        for(int bit: nums){
            rem= (rem*2+bit)%5;
            if(rem==0){
                ans.push_back(true);
            }
            else
            ans.push_back(false);
        }
        return ans;
    }
};