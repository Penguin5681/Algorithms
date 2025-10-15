#include <bits/stdc++.h>

bool isValid(std::string s) {
    int n = s.length();

    std::stack<char> st;
    bool ans = true;
        for (int i =0; i < n; i++) {
            if (s[i] == '{' or s[i] == '(' or s[i] == '[') {
                st.push(s[i]);
            }
            else if (s[i] == ')') {
                if (!st.empty() and st.top() == '(') {
                    st.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
            else if (s[i] == '}') {
                if (!st.empty() and st.top() == '{') {
                    st.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
            else if (s[i] == ']') {
                if (!st.empty() and st.top() == '[') {
                    st.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
        }
        if (!st.empty()) {
            return false;
        }
        return ans;
}

signed main(void) {
    if (isValid("{([])}")) {
        std::cout << "VALID STRING\n";
    }
    else std::cout << "INVALID STRING\n";
}