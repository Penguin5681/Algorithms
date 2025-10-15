#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int nPOWp(int n, int p) {
    if (p == 0) return 1;
    return n * nPOWp(n, p - 1);
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0 or n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}