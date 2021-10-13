#include <stdio.h>

int visited[9] = {};
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

void dfs(int x) {
    visited[x] = 1;
    printf("%d ", x);
    for (int i = 0; i < 3 && graph[x][i] != 0; ++i) {
        if (!visited[graph[x][i]]) {
            dfs(graph[x][i]);
        }
    }
}

int main() {
    dfs(1);
}