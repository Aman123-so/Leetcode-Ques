class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int sumOdd= 0;
       int count=0;
       for(int i=1 ; count<n; i=i+2) {
        sumOdd +=i;
        count++;
       }
       int sumEven=0;
       count =0;
       for(int i=2; count<n;i=i+2){
        sumEven +=i;
        count++;
       }
        return gcd(sumOdd, sumEven);
    }
};