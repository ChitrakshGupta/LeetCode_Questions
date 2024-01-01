class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0;
        int flag=0;
        
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]==' ' && k!=0 && flag==1){
                break;
            }
            else if(s[i]!=' '){
                flag=1;
                k++;
            }
        
        }
        return k;
        
    }
};