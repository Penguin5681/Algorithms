#include <vector>
#include <iostream>
#include <numeric>

std::vector<int> calculatePrefixSum(const std::vector<int> nums) {
    std::vector<int> prefixSum(nums.size());

    if (!nums.empty()) {
        prefixSum[0] = nums[0]; 
        for (int i = 1; i < nums.size(); i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
    }

    return prefixSum;
}

int pivotIndex(const std::vector<int> &nums) {
    std::vector<int> prefixSumArray = calculatePrefixSum(nums);

    int totalSum = prefixSumArray[prefixSumArray.size() - 1];
    int leftSum = 0;
    int rightSum;
    for (size_t it = 0; it < nums.size(); it++) {
        int rightSum = totalSum - leftSum - nums[it];

        if (leftSum == rightSum) {
            return it;
        }

        leftSum = leftSum + nums[it];
    }

    return -1;
}

int pivotIndexOptimized(const std::vector<int> &nums) {
    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0; 

    int rightSum;
    for (size_t it = 0; it < nums.size(); it++) {
        int rightSum = totalSum - leftSum - nums[it];

        if (leftSum == rightSum) {
            return it;
        }

        leftSum = leftSum + nums[it];
    }

    return -1;
}

signed main() {
    std::vector<int> nums1 = {1, 7, 3, 6, 5, 6};
    std::vector<int> nums2 = {1, 2, 3};
    std::vector<int> nums3 = {2, 1, -1};

    std::cout << "1 => " << pivotIndexOptimized(nums1) << std::endl;
    std::cout << "2 => " << pivotIndexOptimized(nums2) << std::endl;
    std::cout << "3 => " << pivotIndexOptimized(nums3) << std::endl;
}