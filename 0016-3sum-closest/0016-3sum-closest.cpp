class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(), nums.end());
    int closestSum = 0;
    int minDiff = INT_MAX;

    for (int k = 0; k < nums.size() - 2; ++k) {
        if (k > 0 && nums[k] == nums[k - 1]) continue; // Skip duplicates for k

        int i = k + 1, j = nums.size() - 1;

        while (i < j) {
            int sum = nums[k] + nums[i] + nums[j];
            int diff = abs(target - sum);

            if (diff < minDiff) {
                minDiff = diff;
                closestSum = sum;
            }

            if (sum < target) {
                ++i;
            } else if (sum > target) {
                --j;
            } else {
                return sum; // Exact match found
            }
        }
    }

    return closestSum;
    }
};