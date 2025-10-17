#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool isMultiple(ll num, ll divisor) {
    if (divisor == 0) return false;    
    return num % divisor == 0;
}

ll getGCND(ll X, ll Y) {
    for (int i = min(X, Y); i >= 1; i--) {
        if (isMultiple(X, i) && isMultiple(Y, i)) {
            return i;
        }
    }
    
    return -1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &it : arr) {
        cin >> it;
    }

    int maxGCNDPair = -1;

    for (int i = 0; i < n - 1; i++) {
        int currGCND = getGCND(arr[i], arr[i + 1]);
        if (currGCND != -1) {
            maxGCNDPair = max(maxGCNDPair, currGCND);
        }
    }

    cout << maxGCNDPair << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}