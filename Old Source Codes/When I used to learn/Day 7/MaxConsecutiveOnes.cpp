#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int count = 0; int maxLen = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] == 1) count++;
                else {
                    maxLen = max(maxLen, count);
                    count = 0;
                } 
            }
            maxLen = max(maxLen, count);
            return maxLen;
        }
};

signed main(void) {
    Solution s;
    vector<int> V = {1,1,0,1,1,1};
    cout << s.findMaxConsecutiveOnes(V);
}