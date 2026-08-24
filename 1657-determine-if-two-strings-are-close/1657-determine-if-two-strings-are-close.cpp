class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n= word1.size();
        int m= word2.size();
        unordered_map<char, int>freq1;
        unordered_map<char,int >freq2;

        for(int i=0; i<n; i++){
            freq1[word1[i]]++;

        }
        for(int i=0; i<m; i++){
            freq2[word2[i]]++;
        }
        for(auto it:freq1){
            if(freq2.find(it.first)==freq2.end()){
                return false;
            }

        }
        vector<int>v1;
        vector<int>v2;
        for(auto it: freq1){
            v1.push_back(it.second);
        }
        for(auto it:freq2){
            v2.push_back(it.second);

        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(), v2.end());

        return v1==v2;
    }
};