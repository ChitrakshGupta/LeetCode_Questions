class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string cmn="";
        for (int i=0; i<strs[0].length(); i++){
            char temp=strs[0][i];
            int flag=0;
            for(int j=1; j<strs.size(); j++){
                if(i<strs[j].length())
               { if(strs[j][i] !=temp){
                    flag=1;
                    break;
                }}
                else{
                    flag=1;
                    break;
                }
                
            }
            
            
            if(flag==0){
                cmn=cmn+temp;
            }else{
                break;
            }
            
        }
        return cmn;
        
    }
};