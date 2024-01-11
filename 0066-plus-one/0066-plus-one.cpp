class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        if(digits[digits.size()-1]!=9){
            digits[digits.size()-1]++;
        }
        else{
            int carry=0;
        
            int sum=digits[digits.size()-1]+1;
            digits[digits.size()-1]=sum%10+carry;
            carry=sum/10;
            int i =digits.size()-2;
            while(carry!=0 && i>=0 ){
               int s2=digits[i]+carry;
                digits[i]=s2%10;
                carry=s2/10;
                
                i--;
                
            }
            if (carry!=0){
                digits.push_back(carry);
                int temp=digits[0];
                digits[0]=digits[digits.size()-1];
                digits[digits.size()-1]=temp;
                    
              
            }
           
            
        }
        
        return digits;
        
    }
};