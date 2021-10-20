#include <stdio.h>

#define N 4
#define M 5

///// structure /////
typedef struct _data {
    int x, y, dir;
} data;


typedef struct _stack {
    data arr[N * M];
    int top;
} stack;

///// stack /////
void stack_init(stack* p_stk) {
    p_stk->top = -1;
}

void stack_push(stack* p_stk, data* p_data) {
    p_stk->arr[++p_stk->top] = *p_data;
}

data stack_pop(stack* p_stk) {
    return p_stk->arr[p_stk->top--];
}

int stack_empty(stack* p_stk) {
    return p_stk->top == -1;
}

int stack_size(stack* p_stk) {
    return p_stk->top + 1;
}

///// logic /////
int next_dir(int maze[][M], int* dx, int *dy, data* p_data) {
    for (int i = p_data->dir + 1; i < 4; ++i) {
        int nx = p_data->x + dx[i], ny = p_data->y + dy[i];
        if (!(nx < 0 || ny < 0 || nx >= M || ny >= N || maze[ny][nx] == 0)) return i;
    }
    return -1;
}

int find_path(int maze[][M], int fx, int fy, int* dx, int* dy, stack* p_stk) {
    data d = {0, 0, -1};
    while (1) {
        while ((d.dir = next_dir(maze, dx, dy, &d)) == -1) {
            if (stack_empty(p_stk)) return 0;
            maze[d.y][d.x] = 1;
            d = stack_pop(p_stk);
        }
        maze[d.y][d.x] = 0;
        stack_push(p_stk, &d);
        d.x += dx[d.dir]; d.y += dy[d.dir]; d.dir = -1;
        if (d.x == fx && d.y == fy) return 1;
    }
}

void print_path(stack* p_stk, int fx, int fy) {
    printf("Path Found!\n");
    printf("The Path can be: ");
    for (int i = 0; i < stack_size(p_stk); ++i) {
        printf("(%d, %d) -> ", p_stk->arr[i].x, p_stk->arr[i].y);
    }
    printf("(%d, %d)\n", fx, fy);
}

int main() {
    int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};
    int maze[N][M] = {{1, 0, 1, 1, 0},
                      {1, 1, 1, 0, 1},
                      {0, 1, 0, 1, 1},
                      {1, 1, 1, 1, 1}};
    int fx = 3, fy = 2; // fx <-> fy
    stack stk;

    stack_init(&stk);
    if (find_path(maze, fx, fy, dx, dy, &stk)) {
        print_path(&stk, fx, fy);
    } else {
        printf("Fath Not Found\n");
    }
}