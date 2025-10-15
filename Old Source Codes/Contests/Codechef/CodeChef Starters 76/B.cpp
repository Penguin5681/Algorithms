#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string test_cases(double A, double B, double C) {
            if ((400 / A) > (400 / B) and (400 / A) > (400 / C)) 
                return "ALICE";
            else if ((400 / B) > (400 / C) and (400 / B) > (400 / C))
                return "BOB";
            
                return "CHARLIE";
        }
};

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
    }

    int t;
    cin >> t;   
    Solution run;
        while (t--) {
            double A, B, C;
            cin >> A >> B >> C;
            cout << run.test_cases(A, B, C) << endl;
        }
}