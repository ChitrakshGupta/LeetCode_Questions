class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
           int tc = 0;
        int sum = 0;
        // {prefix: number of occurrence}
        unordered_map<int, int> mp; // To store the frequency of prefix sums

        for (int num : nums) {
            sum += num;
            if (sum == goal){
                tc++;
            }

            // Check if there is any prefix sum that can be subtracted from the current sum to get the desired goal
            if (mp.find(sum - goal) != mp.end()){
                tc += mp[sum - goal];
            }

            mp[sum]++;
        }

        return tc;
    }
};