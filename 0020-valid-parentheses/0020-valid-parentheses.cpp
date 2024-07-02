class Solution {
public:
    
bool match(char a2, char a) {
    return (a == ')' && a2 == '(') || (a == '}' && a2 == '{') || (a == ']' && a2 == '[');
}

bool isValid(std::string s) {
    if (s.length() == 0) {
        return true;
    }

    std::stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char a = s[i];
        if (a == '(' || a == '[' || a == '{') {
            st.push(a);
        } else {
            if (!st.empty()) {
                char a2 = st.top();
                if (match(a2, a)) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
    return st.empty();
}
};