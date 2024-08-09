class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
           vector<int>  ans;
        int i=0;
        int j=numbers.size()-1;
        while(j>i){
            
            // int mid=(j-i)/2 +i;
            int a=numbers[i]+numbers[j];
            
            if(a==target){
                ans.push_back(i+1);
                 ans.push_back(j+1);
                
                return ans;
            }
            else if(a>target){
                j--;
            }
            else{
                i++;
            }
            
        }
         ans.push_back(-1);
                 ans.push_back(-1);
        return ans;
    }
};