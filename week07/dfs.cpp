#include <bits/stdc++.h>
using namespace std;

int N, M, answer = 0, dx[] = {0,0,-1,1}, dy[] = {-1,1,0,0}, board[200][200];

void dfs(int x, int y) {
    if (x == M - 1 && y == N - 1) {
        answer = board[y][x];
        return;
    }

    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= M || ny >= N || board[ny][nx] == 0 || board[ny][nx] <= board[y][x] + 1) continue;
        board[ny][nx] = board[y][x] + 1;
        dfs(nx, ny);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) {
        scanf("%1d", &board[i][j]);
        if (board[i][j]) board[i][j] = 0x7fffffff;
    }
    board[0][0] = 1;
    dfs(0, 0);
    printf("%d\n", answer);
}


