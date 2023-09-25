class Solution {
public:
    bool checkPalindrome(string s,int i,int j){
        
        while(j>=i){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
    bool validPalindrome(string s) {
        int i=0; int j=s.length()-1;
        
        while(i<j){
            
            if(s[i]==s[j]){
                i++;
                j--;
                
            }
            else{
                // s[i]!=s[j]
                // koi bhi ek remove allowed he
                //check palindrome for remainig string after removel
                
                
                // ith remove ->remove
                bool ans1=checkPalindrome(s,i+1,j);  // check weather inner is palindrome or not
                
                // jth remove
                bool ans2=checkPalindrome(s,i,j-1);
                 // check weather inner is palindrome or not
                
                return ans1 || ans2 ;  // check ki ek me se koi bhi true he to true output
                
                
                
            }
        }
        
        return true;
        
        
    }
};