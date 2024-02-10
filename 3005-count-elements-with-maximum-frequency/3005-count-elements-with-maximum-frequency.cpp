class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        int freq=0;
     
        for(auto& [i,j] : mp){
            freq=max(freq,j);
        }
        
        int ans=0;
        for(auto& [i,j] : mp){
           if(j==freq){
               ans+=j;
           }
        }
        
        
        
        return ans;
        
    }
};