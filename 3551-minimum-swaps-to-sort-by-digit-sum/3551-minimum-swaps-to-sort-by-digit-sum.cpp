class Solution {
public:
  int fun(int n){
    int sum=0;
    if( n==0)
    return 0;
    while(n>0){
        int digit= n%10;
        sum+= digit;
        n= n/10;

    }
    return sum;
  }
    int minSwaps(vector<int>& nums) {
        int n= nums.size();
        vector<pair< int ,int >>arr;
        for(int i=0 ; i<n; i++){
            arr.push_back({fun(nums[i]), nums[i]});
        }
        sort(arr.begin(), arr.end());
         
         vector<int> target(n);
         for(int  i=0;i< n ; i++){
            target[i]=arr[i].second;
         }
           unordered_map<int, int> pos;
           for(int i=0;i<n ; i++){
              pos[nums[i]]= i;
           }
         int cnt=0;
         for(int i=0;i<n ; i++){
            if(nums[i] == target[i]){
                continue;
            }
            int j= pos[target[i]];
            swap( nums[i], nums[j]);

            pos[nums[j]]= j;
            pos[nums[i]]=i;
            cnt++;
         }
         return cnt;
    }
};