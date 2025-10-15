// This code finds the largest words in a sentence;

#include <bits/stdc++.h>

int main() {
    
    int N;
    std::cin >> N;
    char sen[N + 1];

    std::cin.ignore();

    std::cin.getline(sen, N);
    std::cin.ignore();

    int i = 0; int maxL = 0; int currL = 0;
               int st = 0;   int maxst = 0;
        while (true) {

            if (sen[i] == ' ' or sen[i] == '\0') {
                if (currL > maxL) {
                    maxL = currL;
                    maxst = st;
                }
                currL = 0;
                st = i + 1;
            }
            else
                currL++;
                if (sen[i] == '\0') {
                    break;
                }
                i++;
            
        }
        std::cout << maxL << std::endl;
    return 0;
}