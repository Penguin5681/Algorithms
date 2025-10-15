#include <bits/stdc++.h>

int main() {
    int A = 10;         // Stored in Stack
    int *p = new int();     // Memory allocated in heap;
    *p = 10;
    
    delete(p);
    p = new int[4];

    delete[]p;
    p = NULL;
    
    return 0;
}