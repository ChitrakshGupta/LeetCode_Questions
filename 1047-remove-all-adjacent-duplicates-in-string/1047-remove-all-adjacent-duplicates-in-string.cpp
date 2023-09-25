class Solution {
public:
    string removeDuplicates(string s) {
        
        
        string ans="";
        int index=0;
        while(index<s.length()){
            //same
            // ans ka rightmost character aur curent character ko check
            if(ans.length()>0 && ans[ans.length()-1]==s[index]){
                // agr same he to pop
                ans.pop_back();
            }
            else{
                // alg he to push
                ans.push_back(s[index]);
            }
            index++;
            
        }
        return ans;
        
    }
};