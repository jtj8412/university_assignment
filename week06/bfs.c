#include <stdio.h>

int visited[9] = {};
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

void bfs(int start) {
    int q[9] = {}, l = 0, r = -1;

    q[++r] = start;
    visited[start] = 1;

    while (l <= r) {
        int x = q[l++];
        printf("%d ", x);
        for (int i = 0; i < 3 && graph[x][i] != 0; ++i) {
            if (!visited[graph[x][i]]) {
                q[++r] = graph[x][i];
                visited[graph[x][i]] = 1;
            }
        }
    }
}

int main(void) {
    bfs(1);
}