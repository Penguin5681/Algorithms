#include <bits/stdc++.h>
#include <stack>

void Reverse(std::string txt) {
    std::stack<std::string> st;

    for (int i = 0; i < txt.length(); i++) {
        std::string Word = "";
        while (txt[i] != ' ' and i < txt.length()) {
            Word += txt[i];
            i++;
        }
        st.push(Word);
    }
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }
        std::cout << std::endl;
}

signed main(void) {
    
    std::string txt = "Hey, how are you doing?";
    Reverse(txt);

}