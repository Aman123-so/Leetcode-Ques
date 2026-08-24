class Solution {
public:
    vector<int> decrypt(vector<int>& nums, int k) {
       int n= nums.size();
      
       vector<int>ans;
       if(k==0){
        for(int num: nums){
            num=0;
            ans.push_back(num);
        } 
       }
        else if(k>0){
            for(int i=0; i<n;i++){
                int sum=0;
                for(int j=1; j<=k; j++){
                    sum+= nums[(i+j)%n];
                }
                    ans.push_back(sum);
            }
        }
            else{
                for(int i=0;i<n; i++){
                    int sum=0;
                    for(int j=1;j<=-k; j++){
                        sum+= nums[(i-j+n)%n];
                    }
                        ans.push_back(sum);
                    
                }
       } 
       return ans;
    }
};