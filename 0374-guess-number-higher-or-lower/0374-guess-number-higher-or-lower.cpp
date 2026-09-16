/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1; //l=low
        int h=n;// h= high;

        while(l<=h){
            int mid= l+ (h-l)/2;
             int result= guess(mid);


             if(result==0){
                return mid;
             }
             else if( result==1){
             l= mid+1;
            }
            else{
             h= mid-1;
            }  
           }
               
            
        return -1;

    }
};