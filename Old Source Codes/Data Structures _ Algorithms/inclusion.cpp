/*How many numbers between 1 and 1000
are divisible by 5 or 7 ?*/

#include <bits/stdc++.h>

signed main(void) {
    
    int RangeFrom; int RangeTo;
    int count1 = 0, count2 = 0;
    std::cin >> RangeFrom >> RangeTo;

    for (int i = RangeFrom; i <= RangeTo; i++) {
        if (i % 5 == 0) {
            count1++;
        }
        else if (i % 7 == 0) {
            count2++;
        }
    }
    std::cout << count1 + count2;
}