class Solution {
public:
    int expand(string s,int i,int j){  // fun i or j ko move kr rha he
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        
        return count;
        
    }
    int countSubstrings(string s) {
        int count=0;
        for(int center=0; center<s.length(); center++){
            //odd
            int oddkaAns=expand(s,center,center);
            
            //even
            int evenkaAns=expand(s,center,center+1);
            
            count=count+oddkaAns+evenkaAns;
            
        }
        
        return count;
    }
};