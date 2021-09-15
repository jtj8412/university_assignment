#include <iostream>
int main() {
    int n, k, answer = 0, tmp;
    scanf("%d %d", &n, &k);
    while (true) {
        tmp = (n / k) * k;
        answer += n - tmp;
        n = tmp;
        if (n < k) break;
        n /= k;
        ++answer;
    }
    answer += n - 1;
    printf("%d", answer);
}