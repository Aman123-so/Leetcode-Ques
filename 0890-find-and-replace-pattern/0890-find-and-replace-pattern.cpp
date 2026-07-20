class Solution {
public:
    bool isMatch(string word, string pattern){
        unordered_map<char, char>mp1, mp2;
        for(int i=0; i<word.size(); i++){
        char w= word[i];
        char p= pattern[i];
         
            if(mp1.count(p) && mp1[p] != w)
            return false;
            if(mp2.count(w) && mp2[w] !=p)
            return false;

            mp1[p]= w;
            mp2[w]=p;

         }
         return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(string word: words){
            if(isMatch(word, pattern))
            ans.push_back(word);
        }
        return ans;
    }
};