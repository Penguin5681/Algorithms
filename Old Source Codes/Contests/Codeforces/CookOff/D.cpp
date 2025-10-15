#include <bits/stdc++.h>

using namespace std;

const int N = 5004;
int F[N][N], L[N];

class Solution {
    public:
        void test_cases(int size, string S) {
            memset(F, 0, sizeof F);
            memset(L, 0, sizeof L);
                for (int i = 1; i <= size; ++i) {
                    for (int j = i; j <= size; ++j) {
                        if (S[i] == S[j]) 
                            F[i][j] = F[i + 1][j - 1] + 2;
                            L[j - i + 1] = max(L[j - i + 1], F[i][j]);
                    }
                }
                int Result = 0;

                for (int i = size - 1; i >= 2; i--) 
                    L[i] = max(L[i], L[i + 1]);
                for (int i = size; i >= 2; i--) 
                    if (L[i] >= i) {
                        cout << size - 1 << endl;
                        Result = 1;
                        break;
                    }
                if (!Result) cout << "-1" << endl;
        }
};

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    Solution run;
        while (T--) {
            int N; string S;
            cin >> N;
            cin >> S;
            run.test_cases(N, S);
        }
    return 0;
}
