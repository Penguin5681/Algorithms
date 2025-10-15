#include <iostream>
using namespace std;

void test_cases() {
    int N;
    cin >> N;
    string A, B;
    cin >> A >> B;

    int chefWins = 0;
    int chefinaWins = 0;
    int sameMoves = 0;

    for (int i = 0; i < N; i++) {
        char chefMove = A[i];
        char chefinaMove = B[i];

        if (chefMove == chefinaMove) {
            sameMoves++;
        } else if ((chefMove == 'R' && chefinaMove == 's') ||
                   (chefMove == 's' && chefinaMove == 'P') ||
                   (chefMove == 'P' && chefinaMove == 'R')) {
            chefWins++;
        } else {
            chefinaWins++;
        }
    }

    if (chefWins > chefinaWins) {
        cout << chefinaWins << endl;
    } else if (chefinaWins > chefWins) {
        cout << chefWins << endl;
    } else {
        cout << sameMoves << endl;
    }

}

int main() {
    int tc;
    cin >> tc;
    while (tc -- > 0) {
        test_cases();
    }
    return 0;
}
