#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr[100], max_arr[100], min_arr[100], isExists = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    max_arr[0] = INT_MIN;
    for (int i = 1; i < n; ++i) {
        max_arr[i] = max(max_arr[i-1], arr[i-1]);
    }
    min_arr[n-1] = INT_MAX;
    for (int i = n - 2; i >= 0; --i) {
        min_arr[i] = min(min_arr[i+1], arr[i+1]);
    }
    for (int i = 0; i < n; ++i) {
        if (max_arr[i] < arr[i] && min_arr[i] > arr[i]) {
            printf("%d ", i);            
            isExists = 1;
        }
    }
    if (!isExists) {
        printf("-1");
    }
}