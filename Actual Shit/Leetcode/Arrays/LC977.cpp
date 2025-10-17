// Leetcode 977. Squares of a Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> sortedSquares(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    int pos = nums.size() - 1;
    vector<int> result(nums.size());

    while (left <= right) {
      if (abs(nums[left]) > abs(nums[right])) {
        result[pos] = nums[left] * nums[left];
        left++;
      } else {
        result[pos] = nums[right] * nums[right];
        right--;
      }
      pos--;
    }

    return result;
  }
};