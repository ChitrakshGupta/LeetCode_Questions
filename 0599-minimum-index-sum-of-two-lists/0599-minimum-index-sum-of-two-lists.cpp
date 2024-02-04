class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int sum=INT_MAX;
        
        for(int i=0; i<list1.size(); i++){
            
            for(int j=0; j<list2.size(); j++){
                if(list1[i]==list2[j] && (i+j)<=sum)
                   {
                    
                    if((i+j)==sum)
                    {sum=i+j;

                   ans.push_back(list1[i]);}
                    
                    else{
                        sum=i+j;
                        ans.clear();
                        ans.push_back(list1[i]);
                    }
                       break;
                   }
            }
            
        }
        
        return ans;
    }
};