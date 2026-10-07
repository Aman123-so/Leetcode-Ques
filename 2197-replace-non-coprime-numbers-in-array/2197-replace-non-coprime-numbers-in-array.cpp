class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int curr= nums[i];
            while(!st.empty()){
                int g= __gcd(st.top(), curr);
                if(g>1){
                    int lcm= (st.top()/g)*curr;
                    st.pop();
                    curr= lcm;
                }
                else{
                    break;
                }

            }
            st.push(curr);
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};