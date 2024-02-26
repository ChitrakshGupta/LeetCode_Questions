class Solution {
public:
    int countSegments(string s) {
         int ans = 0, n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            // Increment count only if the current character is not a space
            ans++;
            // Skip over characters until a space or end of string is encountered
            while (i < n && s[i] != ' ') {
                i++;
            }
        }
    }
    return ans;
    }
};