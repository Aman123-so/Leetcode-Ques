class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n= arr1.size();
        sort(arr2.begin(), arr2.end());
        int cnt=0;
       for(int i=0;i<n; i++){
        int x= arr1[i];

        auto it = lower_bound(arr2.begin(), arr2.end(), x - d);
        if( it==arr2.end() || *it>x+d)
        cnt++;

       }
       return cnt;
    }
};