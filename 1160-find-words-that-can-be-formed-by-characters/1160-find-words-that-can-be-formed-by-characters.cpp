class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      vector<int>freq(26, 0);
      for(char ch: chars){
        freq[ch-'a']++;
      }  
      int ans =0;
      for(string word:words){
        vector<int>temp(26,0);
        for(char ch:word){
            temp[ch-'a']++;
        }
        bool ok= true;
        for(int i=0; i<26; i++){
            if(temp[i]> freq[i]){
                ok = false;
                break;
            }

        }
        if(ok){
            ans =ans+ word.length();
        }
      }
      return ans;
    }
};