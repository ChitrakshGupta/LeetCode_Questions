class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         int m= *max_element(nums.begin(), nums.end());
        long long ans = 0, i = 0;

        for (int end = 0; end < nums.size(); end++) {
            if (nums[end] == m) {
                k--;
            }
            while (!k) {
                if (nums[i] == m) {
                    k++;
                }
                i++;
            }
            ans += i;
        }
        return ans;
    }
};