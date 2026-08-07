class Solution {
public:
    bool canConstruct(string s, int k) {
        int n= s.size();
        unordered_map<char, int> freq;
        for(int i=0; i<n;i++)
            freq[s[i]]++;
           
        int odd=0;
        for(auto it: freq){
            if(it.second %2==1)
            odd++;
        }
        if(k > n)
       return false;

     return odd <= k;

    }
};