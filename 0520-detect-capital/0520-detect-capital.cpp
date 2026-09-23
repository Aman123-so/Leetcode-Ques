class Solution {
public:
    bool detectCapitalUse(string word) {
        int n= word.size();
        int cptl=0;
        for(int i=0;i<n; i++){
            if(word[i] >= 'A' && word[i]<= 'Z'){
                cptl++;
            }
        }
        if(cptl==0){
            return true;
        }
        if(cptl== n){
            return true;
        }
        if(cptl==1 && word[0] >='A' && word[0] <= 'Z'){
            return true;
        }
        return false;
    }
};