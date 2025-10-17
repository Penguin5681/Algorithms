#include <algorithm>
#include <climits>
#include <cstdint>
#include <iostream>
#include <numeric>
#include <vector>

using std::cout;
using std::endl;

int findMinSubarray(const std::vector<int>& nums, int S) {
  int windowStart = 0;
  int windowSum = 0;
  int minLength = INT_MAX;

  for (int windowEnd = 0; windowEnd < nums.size(); windowEnd++) {
    windowSum += nums[windowEnd];

    while (windowSum >= S) {
      minLength = std::min(minLength, windowEnd - windowStart + 1);
      windowSum -= nums[windowStart];
      windowStart++;
    }
  }

  return (minLength == INT_MAX) ? 0 : minLength;
}

signed main() {
  std::vector<int> nums = {2, 1, 5, 2, 3, 2};
  int S = 7;
  cout << findMinSubarray(nums, S) << endl;
}