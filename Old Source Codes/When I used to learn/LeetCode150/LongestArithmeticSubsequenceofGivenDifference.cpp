// 1218. Longest Arithmetic Subsequence of Given Difference

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int prev_cd = arr[1] - arr[0];    
        int curr = 2;
        int ans = 2;
        int idx = 1;
            while (idx < difference) {
                if (prev_cd == arr[idx] - arr[idx - 1]) curr++;
                else {
                    prev_cd = arr[idx] - arr[idx - 1]; curr = 2;
                }
                ans = max(ans, curr);
                idx++;
            }
        return ans;
    }
}; 

signed main(void) {

}