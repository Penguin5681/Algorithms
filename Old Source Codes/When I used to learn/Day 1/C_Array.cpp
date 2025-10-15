// Array Challenges
#include <bits/stdc++.h>

using namespace std;

// Q1: Max till i

class Q1 {
    public:
        void solve(int A[], int size) {
            int mx = -21362821;
            for (int i = 0; i < size; ++i) {
                mx = max(mx, A[i]);
                cout << mx << " ";
            }
        }
};

// Q2: Sum of all subArrays

class Q2 {
    public: 
        void solve(int A[],int size) {
            
            int curr = 0;
            for (int i = 0; i < size; ++i) {
                curr = 0;
                for (int j = i; j < size; ++j) {
                    curr += A[j];
                    cout << curr << " ";
                }
            }
        }
};

// Q3: Longest arithmetic subArray

class Q3 {
    public:
        void solve(int A[], int n) {
            int prevCD = A[1] - A[0];
            int curr = 2;
            int ans = 2;
            int i = 2;
            
            while (i < n) {
                if (prevCD == A[i] - A[i - 1]) 
                    curr++;
                else {
                    prevCD = A[i] - A[i - 1];
                    curr = 2;
                }
                ans = max(ans, curr);
                i++;
            }
            cout << ans;
        }
};

// Q4: Record Breaking Days

class Q4 {
    public:
        void solve(int A[], int n) {
            int ans = 0;
            int mx = -1;
            for (int i = 0; i < n; ++i) {
                if (A[i] > mx and A[i] > A[i + 1])
                    ans++;
                mx = max(mx, A[i]);
            }
            cout << ans << " ";
        }
};

// Q5: Is the array sorted?

class Q5 {
    public:
        bool solve(int A[], int n) {
            if (n == 1) return true;
            return A[0] < A[1] and solve(A + 1, n - 1);
        }
};

// Q6: Print till n (inc/dec)

class Q6 {
    public:
        void solve(int n) {     // Decreasing Order
            if (n == 0) return;
            cout << n << " ";
            solve(n - 1);
        }

        void solve1(int n) {    // Increasing order
            if (n == 1) {cout << 1 << " "; return;}
            solve1(n - 1);
            cout << n << " ";
        }
};

int main() {
    Q6 run;
    int A[] = {1, 2, 3, 4, 5};
    run.solve1(12);
}