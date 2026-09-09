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
    int sol(int l, int r,int mid){
        if(guess(mid)==0){
            return mid;
        }
        else if(guess(mid)==1){
            return sol(mid+1,r,l+(r-l)/2);
        }
        else{
            return sol(l,mid-1,l+(r-l)/2);
        }
    }
    int guessNumber(int n) {
        return sol(0, n, n/2);
    }
};