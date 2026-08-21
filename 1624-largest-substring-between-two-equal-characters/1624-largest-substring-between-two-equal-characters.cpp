class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
       int n= s.size();
       int ans =-1;
       for(int i=0; i<n ;i++){
        for(int j=i+1; j<n ; j++){
            if(s[i]==s[j]){
            int len= j-i-1;
            ans= max(ans, len);
            }
        }
       } 
       return ans;
    }
};