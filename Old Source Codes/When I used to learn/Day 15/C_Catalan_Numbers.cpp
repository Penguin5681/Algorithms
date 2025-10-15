// Catalan Numbers: Sequence of natural positive number that occur in various counting problems, 
// often involving recursively defined objects
/*
    The closed form of CN in terms of binomial co-ef is:
        Cn = (1 / (1 + n)) * (2n n) = Σ Ci * C n - i, i ∈ [0, n - 1]
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll nth_Catalan(ll n) {      
    if (n <= 1) return 1;
    ll rsl = 0;
    for (ll i = 0; i <= n - 1; ++i) {
        rsl += nth_Catalan(i) * nth_Catalan(n - i - 1);
    }
    return rsl;
}

// Co-ef.1 = 0 to n - 1;
// Co-ef.2 = n - 1 to 0;
// Both Inclusive

signed main(void) {
    auto start = chrono::high_resolution_clock::now();
    cout << nth_Catalan(25) << " " << '\n';
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> timeTaken = end - start;
    cerr << "Time Taken: " << timeTaken.count() << " seconds";
}

// Few Applications of Catalan Numbers:
/*
    1. Possible BST
    2. Parenthesis Combinations
    3. Possible Forests
    4. Ways of triangulations
    5. Possible Paths in Matrix
    6. Dividing a circle using n chords
    7. Dyck words of given length
*/