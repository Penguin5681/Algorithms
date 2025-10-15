// Previously asked in google kick start

/* An arithmetic array is an array that contains at least two integers and the differences
between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are
arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She
wants to choose a contiguous arithmetic sub_array from her array that has the maximum
length. Please help her to determine the length of the longest contiguous arithmetic
sub_array. */
#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int A[N];
    
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int ans = 2;
    int pd = A[1] - A[0];
    int j = 2;
    int current_ans = 2;

        while (j < N) {
                if (pd == A[j] - A[j-1]) {
                    current_ans++;
                }
                else {
                    pd = A[j] - A[j-1];
                    current_ans = 2;
                }
                ans = std::max(ans, current_ans);
            j++;
        }
        std::cout << ans << std::endl;
        return 0;
}

