#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array A[] = {1, 3, -1, -3, 5, 3, 6, 7} and K = 3;
// Find the max of all the subArrays of size K;
// Ex: max(1, 3, -1) = 3; max(3, -1, -3) = 3 and so on; 

class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            deque<int> dq;
            vector<int> ans;
            for (int i = 0; i < nums.size(); ++i) {
                if (!dq.empty() and dq.front() == i - k)        // Removes out of bound index
                    dq.pop_front();
                while (!dq.empty() and nums[dq.back()] < nums[i])   // Removes element <= nums[i];
                    dq.pop_back();
                dq.push_back(i);
                if (i >= k - 1) ans.push_back(nums[dq.front()]);
            }
            return ans;
        }
    };