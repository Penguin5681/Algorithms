// 48. Rotate Image

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        auto transpose = [&](vector<vector<int>> &matrix) {
            for (int i = 0; i < matrix.size(); ++i) {
                for (int j = 0; j < matrix.size(); ++j)
                    swap(matrix[i][j], matrix[j][i]);
            }
        };

        auto revCol = [&](vector<vector<int>> &matrix) {
            for (int i = 0; i < matrix.size(); ++i)
                reverse(matrix[i].begin(), matrix[i].end());
        };

        transpose(matrix); revCol(matrix);
    }
};

signed main(void) {
    Solution S;
    vector<vector<int>> M = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (vector<int> i : M) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
    cout << endl;
    S.rotate(M);
    for (vector<int> i : M) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }

}