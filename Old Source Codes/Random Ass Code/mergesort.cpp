#include <bits/stdc++.h>

long long merge(int Arr[], int L, int mid, int R) {
    long long inv = 0;
    int n1 = mid - L + 1;
    int n2 = R - mid;
    int a[n1]; int b[n2];

    for (int i = 0; i < n1; i++) {
        a[i] = Arr[L + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = Arr[mid + i + 1];
    }
    int i = 0, j = 0, k = L;
        while (i < n1 and j < n2) {
            if (a[i] <= b[j]) {
                Arr[k] = a[i];
                k++;
                i++;
            }
            else {
                Arr[k] = b[j];
                inv += n1 - i;
                k++;
                j++;
            }
        }
        while (i < n1) {
            Arr[k] = a[i];
            k++;
            i++;
        }
        while (j < n2) {
            Arr[k] = b[j];
            k++;
            j++;
        }
        return inv;
}

long long mergeSort(int Arr[], int L, int R) {
    long long inv = 0;
    if (L < R) {
        int mid = (L + R)/2;
        inv += mergeSort(Arr, L, mid);
        inv += mergeSort(Arr, mid + 1, R);
        inv += merge(Arr, L, mid, R);
    }
    return inv;
}

signed main(void) {
    int N;
    std::cin >> N;
    int Arr[N];
        for (int i = 0; i < N; i++) {
            std::cin >> Arr[i];
        }
        std::cout << mergeSort(Arr, 0, N - 1);
        return 0;
}
