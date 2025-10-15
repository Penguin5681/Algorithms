// 26. Remove Duplicates from Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (const auto it : nums) {
            if (it > nums[i - 1])
                nums[i++] = it;
        }
        return i;
    }
};

signed main(void) {

}