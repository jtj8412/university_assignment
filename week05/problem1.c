#include <stdio.h>

int main() {
    int dx[] = {-1, 0, 0, 1}, dy[] = {0, -1, 1, 0};
    int n, i, nx, ny, x = 1, y = 1, idx;
    char str[101];

    scanf("%d\n", &n);
    fgets(str, 101, stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; ++i) {
        if (str[i] == ' ') continue;
        idx = str[i] % 5;
        nx = x + dx[idx], ny = y + dy[idx];
        if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
        x = nx; y = ny;
    }

    printf("%d %d", x, y);
}