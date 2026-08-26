class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       string ans="";
       int n=s.length();
       for(int i=0; i<n; i++){
        int count=0;
        for(int j=i; j<n; j++){
            if(s[j]=='1'){
                count++;
            }
            if(count==k){
                string curr=s.substr(i, j-i+1);
                if(ans==""){
                    ans=curr;
                }
                else if(curr.length()<ans.length()){
                    ans=curr;
                }
                else if(curr.length()== ans.length()){
                    
                
                if(curr<ans){
                    ans=curr;
                }
            }
            break;
            }
        }
       }
       return ans;

    }
};