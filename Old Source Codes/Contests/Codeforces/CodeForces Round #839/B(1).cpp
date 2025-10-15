/*
    Author: @thechillguy69
    Created on: 13:06:34
*/

#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

#define ArrayInput for (int i = 0; i < N; ++i) 
#define ll long long
#define ld long double
#define ff float
#define yes cout << "yes\n"
#define no cout << "no\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

int Second_Max(int A[3]) {
    sort(A, A + 3);
        for (int i = 1; i >= 0; i--) {
            if (A[i] != A[3 - 1]) {
                return A[i];
            }
        }
    return -1;
}

void Solution() {
    int A[3];
        for (int i = 0; i < 3; ++i) {
            cin >> A[i];
        }
        cout << Second_Max(A) << endl;
    
}

int main(int argc, char const *argv[])
{
    int run_test_case;
    cin >> run_test_case;

        do {
            Solution();
            run_test_case--;
        }
            while (run_test_case > 0);
    return 0;
}
