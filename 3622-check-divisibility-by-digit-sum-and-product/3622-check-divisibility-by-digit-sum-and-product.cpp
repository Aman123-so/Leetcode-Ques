class Solution {
public:
    bool checkDivisibility(int n) {
       
    int real =n;
       int sum=0;
       int product=1;
       
       while(n>0){
        int digit= n%10;
       sum += digit;
       product = product* digit;

       n= n/10;
       }
         
       if(real% (sum+product)==0){
        return true;

       }
       return false;
      
    }
};