class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
         unordered_map<int, int> ans;
        for (int num : nums) {
            ans[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (ans[a] == ans[b]) {
                return a > b;
            }
            return ans[a] < ans[b];
        });

        return nums;
    }
};