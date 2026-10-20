class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n= word.size();
        int ans=0;

        for(char ch='a'; ch<='z' ; ch++){
            bool small= false;
            bool capital= false;

            for(int i=0;i<n; i++){
                if(word[i]==ch)
                small = true;
                if( word[i]==ch-32)
                 capital=true;

            }
        
         if(small & capital)
         ans++;
        }
        return ans;
    }
};