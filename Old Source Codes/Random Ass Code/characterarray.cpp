#include <iostream>

int main() {
    
    char arr[100] = "Banana";
    int i = 0;
        while (arr[i] != '\0') {
            std::cout << arr[i] << " ";
            i++;
        }
}