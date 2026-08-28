class Solution {
public:
    bool halvesAreAlike(string s) {
      int n= s.size();
        int count1=0; 
        int count2=0;
       int mid=n/2;
       string vowels="aeiouAEIOU";
        for(int i=0;i<mid;i++){
            if(vowels.find(s[i]) != string::npos){
                count1++;
            }

        }
        for(int j=mid; j<n;j++){
          if(vowels.find(s[j]) != string::npos){
            count2++;
          } 
        }

      
        return count1==count2;
    }
};