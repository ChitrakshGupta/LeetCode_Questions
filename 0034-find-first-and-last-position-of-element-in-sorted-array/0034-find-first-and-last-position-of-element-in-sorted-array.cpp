class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
    int i = 0;
    int j = nums.size() - 1;
    int m;
    while (j >= i) {
        m = i + (j - i) / 2;
        if (target == nums[m]) {
            int left = m;
            int right = m;
            while (left >= 0 && nums[left] == target) {
                left--;
            }
            while (right < nums.size() && nums[right] == target) {
                right++;
            }
            ans[0] = left + 1;
            ans[1] = right - 1;
            break;
        } else if (target > nums[m]) {
            i = m + 1;
        } else {
            j = m - 1;
        }
    }
    return ans;
    }
};