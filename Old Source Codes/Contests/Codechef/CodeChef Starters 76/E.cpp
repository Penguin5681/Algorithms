#include <bits/stdc++.h>
using namespace std;

int T;

int main()
{
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        if (N == 2)
        {
            cout << "343 -343" << endl;
        }
        else if (N % 2 == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << "0";
            for (int i = 1; i <= N / 2; i++)
            {
                cout << " " << -(N / 2 + 1 - i) * (N / 2 + 1 - i);
                cout << " " << (N / 2 + 1 - i) * (N / 2 + 1 - i);
            }
            cout << endl;
        }
    }
    return 0;
}
