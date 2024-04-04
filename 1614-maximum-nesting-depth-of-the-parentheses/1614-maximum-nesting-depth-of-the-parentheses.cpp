class Solution {
public:
    int maxDepth(string s) {
       int ans = 0;
        stack<char> help;
        for (char c : s) {
            if (c == '(') {
                help.push(c);
            } else if (c == ')') {
                help.pop();
            }
            
            ans = max(ans, (int)help.size());
        }
        
        return ans;
    }
};