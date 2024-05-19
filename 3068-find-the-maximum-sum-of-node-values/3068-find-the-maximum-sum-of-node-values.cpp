class Solution {
public:
      long long help(int index, int isEven, vector<int>& nums, int k,
                            vector<vector<long long>>& memo) {
        if (index == nums.size()) {
          
            return isEven == 1 ? 0 : INT_MIN;
        }
        if (memo[index][isEven] != -1) {
            return memo[index][isEven];
        }
        long long as =
            nums[index] + help(index + 1, isEven, nums, k, memo);

        long long asd = (nums[index] ^ k) +
                            help(index + 1, isEven ^ 1, nums, k, memo);

        return memo[index][isEven] = max(asd, as);
    }
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
          vector<vector<long long>> memo(nums.size(), vector<long long>(2, -1));
        return help(0, 1, nums, k, memo);
    }
};