// 389. Find the Difference

#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         int rsl = 0;
//         for (int i = 0; i < s.length(); ++i) {
//             rsl -= s[i];
//             rsl += t[i];
//         }

//         rsl += t[s.size()];
//         return rsl;
//     }
// };

class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0; int t_sum = 0;
        for (int i = 0; i < max(s.length(), t.length()); i++) {
            s_sum += s[i];
            t_sum += t[i];
        }

        return char(max(s_sum, t_sum) - min(s_sum, t_sum));
    }
};

signed main(void) {

}