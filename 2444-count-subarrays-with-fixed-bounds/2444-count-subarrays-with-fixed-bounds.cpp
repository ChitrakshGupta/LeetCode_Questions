class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
         long long ans = 0;
        int left = 0;
        int q = -1;
        int w = -1;

        for (int right = 0; right < nums.size(); right++) {
            int num = nums[right];
            if (num < minK || num > maxK) {
                left = right + 1;
                q = -1;
                w = -1;
            } else {
                if (num == minK) q = right;
                if (num == maxK) w = right;
                ans += max(0, min(q, w) - left + 1);
            }   
        }

        return ans;
    }
};