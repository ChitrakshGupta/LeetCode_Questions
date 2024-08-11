class Solution {
public:
    
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndexMap;
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.length(); ++end) {
        char currentChar = s[end];

        // If the character is already in the map and its index is within the current window
        if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= start) {
            start = charIndexMap[currentChar] + 1; // Move the start to the right of the previous index of the character
        }

        charIndexMap[currentChar] = end; // Update the index of the current character
        maxLength = max(maxLength, end - start + 1); // Calculate the maximum length
    }

    return maxLength;
}
};