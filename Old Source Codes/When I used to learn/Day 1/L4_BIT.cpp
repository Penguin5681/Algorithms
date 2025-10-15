#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int postion) {
    return (n & (1 << postion)) != 0;
}

int setBit(int n, int postion) {
    return (n | (1 << postion));
}

int clearBit(int n, int postion) {
    return (~(n << postion) & n);
}

int updateBit(int n, int position, int value) {
    int ms = ~(1 << position);
    n = n & ms;
    return (n | value << position);
}