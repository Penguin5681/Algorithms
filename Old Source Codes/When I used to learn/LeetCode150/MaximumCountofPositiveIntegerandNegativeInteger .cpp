// 2529. Maximum Count of Positive Integer and Negative Integer

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negativeCount = 0;
        int postiveCount = 0;
        for (const auto it : nums) {
            if (it < 0) negativeCount++;
            if (it > 0) postiveCount++;
        }
        return max(negativeCount, postiveCount);
    }
};

signed main(void) {

}
