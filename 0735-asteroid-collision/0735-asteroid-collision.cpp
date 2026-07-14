class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int n= asteroids.size();
        for(int i=0; i<n; i++){
            int curr= asteroids[i];
            while(!st.empty() && st.top()>0 && curr<0){
                if(st.top() <abs(curr)){
                    st.pop();
                }
                else if(st.top()==abs(curr)){
                    st.pop();
                    curr=0;
                    break;
                }
                else{
                    curr=0;
                    break;
                }
            }
                 if(curr!=0)
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