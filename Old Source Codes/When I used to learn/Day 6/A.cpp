#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(const string &s) {
            int n = s.length();
            int left = 0, right = 0;
            int maxLen = 0;
            unordered_set<char> unqChar;

            while (right < n) {
                char curr = s[right];
                if (unqChar.count(curr) == 0) {
                    unqChar.insert(curr);
                    maxLen = max(maxLen, right - left + 1);
                    right++;
                }
                else {
                    unqChar.erase(s[left]);
                    left++;
                }
            }
            return maxLen;
        } 
};

int main(int argc, char const *argv[])
{
    Solution st;
    string s = "abcabcbb";
    cout << st.lengthOfLongestSubstring(s);
    return 0;
}
