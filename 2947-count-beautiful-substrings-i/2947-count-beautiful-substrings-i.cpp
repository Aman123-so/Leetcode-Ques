class Solution {
public:
  bool isvowel(char ch){
     ch= tolower(ch);

    return (ch=='a'|| ch=='e' || ch=='i'|| ch=='o'|| ch=='u');
  }
    int beautifulSubstrings(string s, int k) {
        int n= s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int vowel=0;
            int constt=0;
            for(int j=i;j<n;j++){
            if(isvowel(s[j])){
               vowel++;
            }
               else{
                constt++;
               }
        
        if(vowel==constt && (vowel*constt)%k==0){
            ans++;
        }
        }
        }
        return ans;

    }
};