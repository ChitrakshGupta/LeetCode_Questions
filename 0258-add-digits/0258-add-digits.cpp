class Solution {
public:
    
    int add(int n){
        int s1=0;
           while(n>0){
            s1+=n%10;
            n=n/10;
        }
        return s1;
    }
    int addDigits(int num) {
        
        int s1=add(num);
        
        while(s1>9){
            s1=add(s1);
            
        }
        return s1;
        
    }
};