class Solution {
public:
    double myPow(double x, int n) {
        double ans =1;
        long long p= n;
        long long y=n;
        if(y<0){
            y=-y;
        }
        while(y>0){
            if(y%2!=0){
            ans= ans*x;
            }
            x= x*x;
            y=y/2;
        }
        if(p>0){
            return ans;
        }
        else{
            ans= 1/ans;
            return ans;
        }

    }
};