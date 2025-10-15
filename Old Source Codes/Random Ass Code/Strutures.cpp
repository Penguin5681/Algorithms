#include <bits/stdc++.h>

struct co_ordinates
{
    float X, Y;
};

struct Array_Struct {
    int Random_Numbers;
};

signed main(void) {

    co_ordinates location;

    location.X = 1.345;
    location.Y = -3.45;

    //std::cout << location.Y << '\n';

    Array_Struct num[10];
/* 
    num[0].Random_Numbers = 12;
    num[1].Random_Numbers = 13; */

    for (int i = 0; i < 10; ++i) {
        num[i].Random_Numbers = i;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << num[i].Random_Numbers << " ";
    }
    //std::cout << num[0].Random_Numbers;

    return 0;
}