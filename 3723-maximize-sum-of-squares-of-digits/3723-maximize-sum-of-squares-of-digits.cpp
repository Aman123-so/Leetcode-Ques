class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum> 9*num){
            return "";
        }
        string ans(num,'0');
        int i=0;
        while(sum>0){
            if( sum>=9){
                ans[i]='9';
                sum-= 9;
            }
            else{
                ans[i]= char('0'+ sum);
                sum=0;
            }
            i++;
        }
        return ans;
    }
};