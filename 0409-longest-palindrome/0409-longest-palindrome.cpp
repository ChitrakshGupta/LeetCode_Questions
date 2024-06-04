class Solution {
public:
 
int longestPalindrome(string s) {
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }
    
    int length = 0;
    bool oddCountFound = false;
    
    for (auto i : mp) {
        if (i.second % 2 == 0) {
            length += i.second;
        } else {
            length += i.second - 1;
            oddCountFound = true;
        }
    }
    
    if (oddCountFound) {
        length += 1;
    }
    
    return length;
}

};