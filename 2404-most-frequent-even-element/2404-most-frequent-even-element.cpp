class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        
        
        int max_freq = 0;
        int max_no = -1;
        
        for (auto& i : mp) {
            if (i.second > max_freq || (i.second == max_freq && i.first < max_no)) {
                max_freq = i.second;
                max_no = i.first;
            }
        }
        
        return max_no;
    }
};