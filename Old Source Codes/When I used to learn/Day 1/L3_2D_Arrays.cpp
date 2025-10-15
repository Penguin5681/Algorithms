#include <bits/stdc++.h>

using namespace std;

void spiralOrderTraversal(int M[3][3]) {
    int rowStart = 0; int rowEnd = 2;
    int colStart = 0; int colEnd = 2;

    while (rowStart <= rowEnd and colStart <= colEnd) {
        // starting row (j is a column iterator): 
        for (int j = colStart; j <= colEnd; j++) 
            cout << M[rowStart][j] << " ";
        rowStart++; 

        // ending column 
        for (int i = rowStart; i <= rowEnd; i++) 
            cout << M[i][colEnd] << " ";
        colEnd--;

        // ending row 
        for (int j = colEnd; j >= colStart; j--) 
            cout << M[rowEnd][j] << " ";
        rowEnd--;

        // starting column
        for (int i = rowEnd; i >= rowStart; i--)
            cout << M[i][colStart] << " ";
        colStart++;
    }
}

/*
    Input: 

    1 2 3
    34 56 7
    1 2 3

    Expected Output: 

    1 2 3 7 3 2 1 34 56
*/