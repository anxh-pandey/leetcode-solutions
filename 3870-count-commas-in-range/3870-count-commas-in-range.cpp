class Solution {
public:
    int countCommas(int n) {
        int c=0;
        int t=0;
        int a=n;
        while(n/1000>0){
            n=n/1000;
            c++;
        }
        for(int i=1000;i<=a;i++){
            t++;
        }
        return c*t;
    }
};