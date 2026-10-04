class Solution {
public:
    int minRotations(string s) {
       int ans=0;
        int curr=0;
        for(char ch:s){
            int next= ch-'0';
            int diff= abs(next-curr);

            ans+= min(diff, 10-diff);
            curr= next;
        }
        return ans;
    }
};