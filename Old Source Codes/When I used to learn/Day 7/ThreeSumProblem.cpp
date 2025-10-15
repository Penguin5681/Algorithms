#include <bits/stdc++.h>

using namespace std;

class solution {
    public:
        // Approach 1 (Brute Force): Trying all the possible combinations
        vector<int> A1_threeSumProblem(vector<int> &V, int target) {
            bool flag = false;
            vector<int> ans;
            for (int i = 0, j, k; i < V.size(); ++i) {
                for (j = i + 1; j < V.size(); ++j) {
                    for (k = j + 1; k < V.size(); ++k) {
                        if (V[i] + V[j] + V[k] == target) {
                            ans.push_back(V[i]);
                            ans.push_back(V[j]);
                            ans.push_back(V[k]);
                        }
                    }
                }
            }
            return ans;
        }

        // Approach 2 (Optimized): Two Pointers

        vector<int> A2_threeSumProblem(vector<int> &V, int target) {
            sort(V.begin(), V.end());
            vector<int> ans;
            bool flag = false;
            for (int i = 0; i < V.size(); ++i) {
                int low = i + 1;
                int high = V.size() - 1;
                    while (low < high) {
                        int currSUM = V[i] + V[low] + V[high];
                        if (currSUM == target){
                            ans.push_back(V[i]);
                            ans.push_back(V[low]);
                            ans.push_back(V[high]);
                        }
                        if (currSUM < target) low++;
                        else high--; 
                    }
            }
            return ans;
        }
};

signed main(void) {
    solution s;
    vector<int> V = {12, 6, 9, 3, 7, 1};
    vector<int> rsl = s.A2_threeSumProblem(V, 24);
    for (int i : rsl) cout << i << " ";

}