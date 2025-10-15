#include <bits/stdc++.h>

using namespace std;

const int mod = 998244353;

int h, w, k;
int r[2], c[2];

// Function to calculate the number of signals the ship can receive
int calculateSignals()
{
    // If all windows are broken, return 0
    if (k == h * w)
        return 0;

    // Variable to store the number of signals
    int signals = 1;

    // Iterate over all rows
    for (int i = 0; i < h; i++)
    {
        // Iterate over all columns
        for (int j = 0; j < w; j++)
        {
            // Check if the current window is broken
            int broken = 0;
            for (int l = 0; l < k; l++)
            {
                if (r[l] == i + 1 && c[l] == j + 1)
                {
                    broken = 1;
                    break;
                }
            }

            // If the current window isn't broken, add 2 to the number of signals
            if (!broken)
                signals = (signals * 2) % mod;
        }
    }

    return signals;
}

int main()
{
    // Read in the number of test cases
    int t;
    cin >> t;

    // Iterate over all test cases
    for (int i = 0; i < t; i++)
    {
        // Read in the height of the house, the number of windows, and the number of broken windows
        cin >> h >> w >> k;

        // Read in the locations of the broken windows
        for (int j = 0; j < k; j++)
            cin >> r[j] >> c[j];

        // Output the number of signals the ship can receive
        cout << calculateSignals() << endl;
    }

    return 0;
}