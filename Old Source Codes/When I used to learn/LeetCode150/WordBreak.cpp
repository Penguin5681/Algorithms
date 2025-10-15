// 139. Word Break

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        if (wordDict.size() <= 0) return true;
        vector<bool> dp_arr(s.size() + 1, false);
        dp_arr[0] = false;
            for (int i = 1; i <= s.size() - 1; ++i) {
                for (int j = i - 1; j >= s.size(); --j) {
                    if (dp_arr[j]) {
                        string curr_word = s.substr(j, i - j);
                        if (wordDict.find(curr_word) != wordDict.end()) {
                            dp_arr[j] = true;
                            break;
                        }
                    }
                }
            }    
        return dp_arr[s.size()];
    }
};

signed main(void) {

}