/* Problem: Given a collection of numbers, nums, that might
contain duplicates, return all possible
unique permutations in any order. */

#include <bits/stdc++.h>
#include <vector>
using std::vector;
using std::swap;

void helper(vector<int> a, vector<vector<int>> &ans, int idx) {
    if (idx == a.size()) {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++) {
        if (i != idx and a[i] == a[idx]) {
            continue;
        }
        swap(a[i], a[idx]); 
        helper(a, ans, idx + 1);
    }
    return;
}

vector<vector<int>> permute(vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    helper(nums, ans, 0);
    return ans;
}

signed main(void) {
    int n;
    std::cin >> n;
    
    vector<int> a(n);
    for (auto &i : a) {
        std::cin >> i;
    }
    
    vector<vector<int>> res = permute(a);
    for (auto v : res) {
        for (auto i : v) {
            std::cout << i << " ";
        }
            std::cout << std::endl;
    }
    return 0;
}