class Solution {
public:
  
    int minimumLength(string s) {
        int i=0;
        int j=s.length()-1;
        
        // similar char kodeleate kr rhe he 
        while(j>i && s[i]==s[j]){
            char c=s[i];
            // agr shure ke sre char jo akhri se same he unhe hta rhe he
            while(i<=j && s[i]==c){
                i++;
            }
            // akhri ke sare char jo shuru se same he unhe hta rhe he
            while(j>i && s[j]==c){
                j--;
            }
        }
        // return no of remaining chare
        
        return j-i+1;
            
    }
};