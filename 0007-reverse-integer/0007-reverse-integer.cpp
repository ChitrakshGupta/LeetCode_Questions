class Solution {
public:
    int reverse(int x) {
        int flag=0;
        if(x<0){
            flag=1;
            x=abs(x);
        }
        long rev=0;
        while(x>0){
            rev=rev*10+x%10;
            x=x/10;
        }
        if(flag==1){
            rev=rev*(-1);
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        
        return rev;
        
        
    }
};