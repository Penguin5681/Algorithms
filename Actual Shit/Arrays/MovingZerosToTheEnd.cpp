#include <vector>
#include <algorithm>
#include <iostream>

void moveZeros(std::vector<int> &nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            std::swap(nums[i], nums[count]);
            count++;
        }
    }
}

void moveZerosAlternate(std::vector<int> &nums) {
    // this would be done using assignments to reduce the write operations
    int write_ptr = 0;
    for (int read_ptr = 0; read_ptr < nums.size(); ++read_ptr) {
        if (nums[read_ptr] != 0) {
            nums[write_ptr] = nums[read_ptr];
            write_ptr++;
        }
    }

    for (int i = write_ptr; i < nums.size(); ++i) {
        nums[i] = 0;
    }
}

signed main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    // Just moving the zeros to the end while maintaing the order
    // Output should be: 1, 3, 12, 0, 0
    moveZerosAlternate(nums);

    for (auto it : nums) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
}