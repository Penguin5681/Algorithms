#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        auto transpose = [&](vector<vector<int>> &num) {
            for (int i = 0; i <num.size(); ++i) {
                for (int j = 0; j < num.size(); ++j) {
                    swap[num[i], num[j]];
                }
            }
        };     
    }
};