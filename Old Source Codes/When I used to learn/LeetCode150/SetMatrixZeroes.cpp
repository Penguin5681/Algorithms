// 73. Set Matrix Zeroes

#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowFlag = false;
        bool colFlag = false;
        for (auto i = 0; i < matrix.size(); i++) {
            for (auto j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    if (i == 0)
                        rowFlag = true;
                    if (j == 0)
                        colFlag = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
            for (auto i = 1; i < matrix.size(); i++) {
                for (auto j = 1; j < matrix[0].size(); j++) {
                    if (matrix[i][0] == 0 or matrix[0][j] == 0)
                        matrix[i][j] = 0;
                }
            }
            if (rowFlag) {
                for (int i = 0; i < matrix.size(); i++)
                    matrix[i][0] = 0;
            }
            if (colFlag) {
                for (int i = 0; i < matrix.size(); i++)
                    matrix[0][i] = 0;
            }
        }
    }
};

signed main() {

}