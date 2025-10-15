#include <bits/stdc++.h>
#include <vector>

typedef std::string txt;

void Permutations(txt s, txt ans) {

    if(s.length() == 0) {
        std::cout << ans << " ";
        return;
    }
    
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        txt ros = s.substr(0, i) + s.substr(i+1);

        Permutations(ros, ans + ch);
    }
}

signed main(void) {
    Permutations("ABCD", "");
    return 0;
}