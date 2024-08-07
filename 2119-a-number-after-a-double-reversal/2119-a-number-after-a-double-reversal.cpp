class Solution {
public:
    bool isSameAfterReversals(int num) {
         if(num == 0){
            return true;
        }
        int nc = num;
        int ans = 0;
        while(num > 0){
            int digit = num % 10;
            ans = ans * 10 + digit;
            num = num/10;
        }

        int temp = ans;
        int rev = 0;
        while(temp > 0){
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp/10;
        }

        return nc == rev;
    }
};