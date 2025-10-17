#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <cstdint>
#include <climits>

using std::cout;
using std::endl;

int findMaxSumSubarray(const std::vector<int>& arr, int k) {
    if (arr.empty() || k <= 0 || k > arr.size()) {
        return 0;
    }

    if (arr.size() == k) {
        return std::accumulate(arr.begin(), arr.end(), 0);
    }
    
    int windowStart = 0;
    int windowEnd = k;

    int windowSum = 0;

    for (int i = windowStart; i < windowEnd; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;


    while (windowEnd < arr.size()) {
        windowSum = windowSum - arr[windowStart] + arr[windowEnd];
        maxSum = std::max(windowSum, maxSum);

        windowStart++;
        windowEnd++;
    }

    return maxSum;

}

signed main() {
    std::vector<int> nums = {9753, 2228, 8097, 5261, 1870, 9643};
    int k = 3;

    cout << findMaxSumSubarray(nums, k) << endl;
}