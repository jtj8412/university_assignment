#include <bits/stdc++.h>
using namespace std;

const int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};
int N, M;
vector<vector<int>> board;

void dfs(int x, int y) {
    board[y][x] = 1;
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= M || ny < 0 || ny >= N || board[ny][nx] == 1) continue;
        dfs(nx, ny);
    }
}

int main() {
    int answer = 0;
    cin >> N >> M;
    board.resize(N); 
    for (int i = 0; i < N; ++i) {
        board[i].resize(M);
        for (int j = 0; j < M; ++j) 
            scanf("%1d", &board[i][j]);
    }
    for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) {
        if (board[i][j] == 1) continue;
        dfs(j, i);
        ++answer;
    }
    cout << answer << "\n";
}