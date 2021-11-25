#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr[5] = {}, val, bit_max;
    scanf("%d", &n);
    bit_max = (1 << (n - 1));
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &val);
        arr[i] |= val;
        for (int bit = bit_max; bit != 0; bit >>= 1) {
            printf("%c", ((bit & arr[i]) ? '#' : ' '));
        }
        printf("\n");  
    }
}