class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int>freq;
        for(int x: s){
            freq[x]++;
        }
        unordered_set<int>usedfreq;
        int del=0; //del= deletion
        for(auto it : freq){
            int currfreq= it.second;
            while(currfreq>0 && usedfreq.count(currfreq)){
                currfreq--;
                del++;
            }
            if(currfreq>0){
                usedfreq.insert(currfreq);

            }
            
        }
        return del;
    }
};