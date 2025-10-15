#include <bits/stdc++.h>

using namespace std;

// Deque = Double Ended Queue (pronunciation: DECK)

void DEQUE() {
    deque<int> Dq;
    Dq.push_front(1);
    Dq.push_front(2);
    Dq.push_front(3);
    Dq.push_back(4);
    Dq.push_back(5);
    Dq.push_back(6);
        for (int i : Dq) cout << i << " ";
}

// Q : SLIDING WINDOW MAXIMUM
// Given an array and K 
// 1 3 -1 -3 5 3 6 7 K = 3
// 3 3 5 5 5 6 7 

void problem1() {
    vector<int> V = {1, 3, -1, -3, 5, 3, 6, 7};
    int K = 3;

    deque<int> dq;
    vector<int> ans;    
        for (int i = 0; i < V.size(); ++i) {
            if (!dq.empty() and dq.front() == i - K)
                dq.pop_front();
            while (!dq.empty() and V[dq.back()] <= V[i])
                dq.pop_back();
            dq.push_back(i);
            if (i >= K - 1) ans.push_back(V[dq.front()]);
        }
    for (auto it : ans) cout << it << " ";
}

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            if (!dq.empty() and dq.front() == i - k)
                dq.pop_front();
            while (!dq.empty() and nums[dq.back()] < nums[i])
                dq.pop_back();
            dq.push_back(i);
            if (i >= k - 1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

class solution1 {
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            vector<int> ans;
            for (int i = 0; i < nums.size(); ++i) {
                for (int j = i + 1; j < nums.size(); ++j) {
                    if (nums[i] + nums[j] == target) {
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
            }
            return ans;
        }
};

// nums = [2,7,11,15], target = 9 output: [0, 1]