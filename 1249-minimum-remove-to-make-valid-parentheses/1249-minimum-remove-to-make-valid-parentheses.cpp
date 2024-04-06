class Solution {
public:
string minRemoveToMakeValid(std::string s) {
    std::stack<int> stk;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            stk.push(i);
        } else if (s[i] == ')') {
            if (!stk.empty()) {
                stk.pop();
            } else {
                s[i] = '*'; // Mark invalid ')' for removal
            }
        }
    }

    while (!stk.empty()) {
        s[stk.top()] = '*'; // Mark remaining '(' for removal
        stk.pop();
    }

    std::string result;
    for (char c : s) {
        if (c != '*') {
            result.push_back(c);
        }
    }

    return result;
}

};