#include <iostream>

int main() {
    int n, *arr;

    // init
    scanf("%d", &n);
    arr = new int[n];
    for (int i = 0; i < n; ++i) scanf("%d", arr + i);

    // logic
    for (int i = n - 1, j = n - 1; i >= 0; --i) {
        if (arr[i] == 0) {
            while (arr[j] == 0 && j >= 0) --j;
            if (i >= j) continue;
            arr[i] = arr[j];
            arr[j] = 0;
        }
    }

    // result
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    // release
    delete[] arr;
}