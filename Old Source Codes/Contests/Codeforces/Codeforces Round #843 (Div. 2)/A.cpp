#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        std::string a, b, c;
        bool possible = false;
        // Iterate through all possible values of |b|
        for (int i = 1; i < s.length()-1; i++) {
            b = s.substr(0, i);
            std::string rest = s.substr(i);

            //b>=a and b>=c or b<=a and b<=c
            if( b <= rest.substr(0, i) && b <= rest.substr(i)){
                a = s.substr(0, i);
                c = rest;
                possible = true;
                break;
            }
            if( b >= rest.substr(0, i) && b >= rest.substr(i)){
                a = rest.substr(0, i);
                c = rest.substr(i);
                possible = true;
                break;
            }
        }

        if (possible) {
            std::cout << a << " " << b << " " << c << std::endl;
        } else {
            std::cout << ": (" << std::endl;
        }
    }

    return 0;
}
