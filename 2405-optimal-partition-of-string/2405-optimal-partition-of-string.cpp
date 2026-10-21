class Solution {
public:
    int partitionString(string s) {
        int n= s.size();
        vector<int >freq(26,0);
        int cnt=1;
        for(int i=0;i<n; i++){
            int idx= s[i]-'a';

            if(freq[idx]==1){
                cnt++;
                fill(freq.begin(), freq.end(),0);
            }
            freq[idx]=1;
        }
        return cnt;
    }
};