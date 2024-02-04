class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<std::vector<int>> ans;
 sort(nums.begin(), nums.end());

    for (int k = 0; k < nums.size() - 2; ++k) {
        if (k > 0 && nums[k] == nums[k - 1]) continue; // Skip duplicates for k

        int target = -nums[k];
        int i = k + 1, j = nums.size() - 1;

        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum == target) {
                ans.push_back({nums[k], nums[i], nums[j]});
                ++i; --j;
                while (i < j && nums[i] == nums[i - 1]) ++i; // Skip duplicates for i
                while (i < j && nums[j] == nums[j + 1]) --j; // Skip duplicates for j
            } else if (sum < target) {
                ++i;
            } else {
                --j;
            }
        }
    }

    return ans;
    }
};