class Solution {
    public int subarraysWithKDistinct(int[] arr, int k) {
    return help(arr, k) - help(arr, k - 1);
}

private int help(int[] arr, int distinctK) {
    Map<Integer, Integer> ans = new HashMap<>();
    int left = 0, sum = 0;

    for (int i = 0; i < arr.length; i++) {
        ans.put(arr[i], ans.getOrDefault(arr[i], 0) + 1);

        while (ans.size() > distinctK) {
            ans.put(arr[left], ans.get(arr[left]) - 1);
            if (ans.get(arr[left]) == 0) {
                ans.remove(arr[left]);
            }
            left++;
        }

        sum += (i - left + 1);
    }
    return sum;
}

}