class Solution {
public:
    int mySqrt(int x) {
        int i=1;
       int j=x;
       while(i<=j){
           int m=(j-i)/2+i;
           if(m>x/m) j=m-1;
           else if(m<x/m) i=m+1;
           else return m;
       }
       return j;
    }
};