#include <iostream>
#include <vector>

std::vector<int> getPositiveNumbers(const std::vector<int> &nums) {
    int positiveCount = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            positiveCount++;
        }
    }

    std::vector<int> positiveNumbers;
    positiveNumbers.reserve(positiveCount);

    for (auto it : nums) {
        if (it > 0) {
            positiveNumbers.push_back(it);
        }
    }

    return positiveNumbers;
}

signed main() {
    std::vector<int> nums = {1, -2, 3, 0, -4, 5};
    
    for (auto it : getPositiveNumbers(nums)) {
        std::cout << it << " ";
    }

    std::cout << std::endl;
}