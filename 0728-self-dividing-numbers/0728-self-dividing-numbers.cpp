class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
         for(int i=left; i<=right; i++){
           int temp=i;
             int flag=0;
             while(temp>0){
                 int digit=temp%10;
                 temp/=10;
                 if((digit!=0 && i%digit!=0)||digit==0){
                     flag=1;
                     break;
                 }
             }
             if(flag==0){
                  ans.push_back(i);
             }
             
        }
        // ans.push_back(right);
        return ans;
        
        
    }
};