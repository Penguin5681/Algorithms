// 39. Combination Sum

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    vector<vector<int>> rsl;
    vector<int> current_combinations;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        depth_first_search(0, current_combinations, 0, target, candidates);
        return rsl;
    }

    void depth_first_search(int idx, vector<int> curr, int total_sum, int target, vector<int> candidates) {
        if (total_sum == target) {
            rsl.push_back(curr);
            return;
        }

        if (idx >= candidates.size() or total_sum > target) return;

        curr.push_back(candidates[idx]);
        depth_first_search(idx, curr, total_sum, target, candidates);
        curr.pop_back();
        depth_first_search(idx++, curr, total_sum, target, candidates);

    }
};

signed main(void) {

}