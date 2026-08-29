class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
       int n= nums.size();
       vector<pair<int,int>>v;
       for(int i=0;i<n; i++){
        v.push_back({nums[i],i});
       }
        sort(v.begin(), v.end());
       int i=0;
       while(i<n){
        int j=i;
         while (j + 1 < n && v[j + 1].first - v[j].first <= limit) {
                j++;
            }

        vector<int>indx;
        for(int k=i;k<=j; k++){
            indx.push_back(v[k].second);
        }
        sort(indx.begin(), indx.end());
        for(int k=0;k<indx.size(); k++){
            nums[indx[k]]= v[i+k].first;
        }
        i=j+1;
       }
       return nums;
    }
};