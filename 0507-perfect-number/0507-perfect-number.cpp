class Solution {
public:
    bool checkPerfectNumber(int num) {
        int temp=num;
        int sum=0;
        for(int i=1; i<=temp/2; i++){
            if(temp%i==0){
                sum+=i;
            }
        }
        
        if(sum==temp)
        {
            return true;
        }
        return false;
        
    }
};