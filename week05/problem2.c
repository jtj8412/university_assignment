#include <stdio.h>

int main() {
    int n, answer, hour = (15 * 45) + (60 * 15);
    scanf("%d", &n);
    answer = (n + 1) * hour;
    if (answer >= 3) answer = (answer - hour) + 3600;
    printf("%d", answer);
}