class Solution {
public:
    string add(string a , string b){
         reverse(a.begin(),a.end());
         reverse(b.begin(),b.end());
        
        
        string c="";
    if(a.length()<=b.length()){
        int carry=0;
        for(int i=0; i<a.length(); i++){
            if((a[i]=='1' && b[i]=='0') ||a[i]=='0' && b[i]=='1'){
                if(carry==0)
                {c=c+'1';}
                else{
                    c=c+'0';
                    carry=1;
                }
                
                
            }
            else if(a[i]=='0' && b[i]=='0'){
                  if(carry==0)
                { c=c+'0';
        carry=0;}
                
                else{
                    c=c+'1';
                    carry=0;
                }
                
            }
            else{
                if(carry==0)
                { c=c+'0';
        carry=1;}
                
                else{
                    c=c+'1';
                    carry=1;
                }
            }
            
        }
        
        for(int j=a.length(); j<b.length(); j++){
            if(carry==0){
                c=c+b[j];
            }
            else{
                if(b[j]=='0'){
                    c=c+'1';
                    carry=0;
                }
                else{
                    c=c+'0';
                    carry=1;
                    
                }
            }
        }
        
        if(carry==1){
            c=c+'1';
        }
        
        
        
    }
         reverse(c.begin(),c.end());
        
        return c;
    }
    string addBinary(string a, string b) {
        
       if(a.length()<= b.length()){
           return add(a,b);
       }
        return add(b,a);
        
    }
};