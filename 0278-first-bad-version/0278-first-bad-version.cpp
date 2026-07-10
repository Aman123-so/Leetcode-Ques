// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int low=1; 
       int high=n;
       int ans=n;
       while(low<=high){
        long long guess = ((long long)low + high) / 2;
        if(isBadVersion(guess)){
            ans= guess;
            high= guess-1;
        }
        else{
            low= guess+1;
        }
       }
        return ans;
       }
    
};