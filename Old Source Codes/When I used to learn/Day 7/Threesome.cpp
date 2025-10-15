#include <bits/stdc++.h>

using namespace std;

class solution {
    public:
        vector<vector<int>> threeSum(vector<int> &V) {
            int target = 0;
            vector<vector<int>> ans;
            sort(V.begin(), V.end());
            for (int i = 0; i < V.size(); ++i) {
                int low = i + 1;
                int high = V.size() - 1;
                int target = -V[i];
                    while (low < high) {
                        int currSUM = V[low] + V[high];
                        if (currSUM == target) {
                            vector<int> triplet = {V[i], V[low], V[high]};
                                ans.push_back(triplet);
                                while (low < high and V[low] == triplet[1]) low++;
                                while (low < high and V[high] == triplet[2]) high--;
                        }
                        else if (currSUM < target) low++;
                        else high--;
                    }
                    while (i + 1 < V.size() and V[i + 1] == V[0]) i++;
            }    
            return ans;
        }
};

signed main(void) {
    vector<int> V = {-1, 0, 1, 2, -1, -4};
    solution s;
    vector<vector<int>> rsl = s.threeSum(V);
    for (int i = 0; i < rsl.size(); ++i) {
        for (int j = 0; j < rsl.size(); ++j) {
            cout << rsl[i][j] << " ";
        }
    }
}

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]