class Solution {
public:

    bool checkSubarraySum(vector<int>& nums, int k) {
            int sum = 0;
    unordered_map<int, int> hash;
    hash[0] = -1; // Initialize with -1 to handle edge case when the subarray starts from index 0

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        int mod = sum % k;
        
        // Normalize mod to be positive
        if (mod < 0) mod += k;
        
        if (hash.find(mod) != hash.end()) {
            if (i - hash[mod] > 1) {
                return true;
            }
        } else {
            hash[mod] = i;
        }
    }
    return false;
    
    }
};