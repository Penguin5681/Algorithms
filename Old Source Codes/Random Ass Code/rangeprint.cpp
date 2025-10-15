#include <iostream>

int main() {
    int rangeFrom, rangeTo, i, j;
    
    std::cout << "Enter a Range to display prime no.s between them: " << std::endl;
    std::cin >> rangeFrom;
    std::cout << rangeFrom << " To ";
    std::cin >> rangeTo;
    std::cout << "The range is: " << rangeFrom << " To " << rangeTo << std::endl;

    for (i = rangeFrom; i <= rangeTo; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }

        if (j == i) {
            std::cout << j << " ";
        }
    }

    return 0;
}