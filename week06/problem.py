dx = [0, 0, -1, 1]; dy = [-1, 1, 0, 0]
answer = 0
N, M = map(int, input().split())
board = []

def dfs(x, y):
    board[y][x] = 1
    for i in range(4):
        nx = x + dx[i]; ny = y + dy[i]
        if nx < 0 or nx >= M or ny < 0 or ny >= N or board[ny][nx] == 1: continue
        dfs(nx, ny)

for i in range(N): board.append(list(map(int, input())))
for i in range(N): 
    for j in range(M):
        if board[i][j] == 0:
            dfs(j, i)
            answer += 1
print(answer)