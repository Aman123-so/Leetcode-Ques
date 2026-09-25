class Solution {
public:
    string processStr(string s) {
         string result ="";
        for(auto ch: s){
            if(ch=='*'){
                if(result.length() >0) result.pop_back();
                 
            }
            else if(ch=='#'){
                result += result;
            }
            else if( ch=='%'){
                reverse(result.begin(), result.end());
            }
            else{
                result+=ch;
            }
        }
        return result;
    }
};