from collections import deque

dx = (0,0,-1,1); dy = (-1,1,0,0)
N, M = map(int, input().split())
board = []
for i in range(N): board.append(list(map(int, input())))

q = deque([(0, 0)])

while q:
    pos = q.popleft()
    for i in range(4):
        nx = pos[0] + dx[i]; ny = pos[1] + dy[i]
        if (nx < 0 or ny < 0 or nx >= M or ny >= N or board[ny][nx] == 0 or board[ny][nx] > 1): continue
        board[ny][nx] = board[pos[1]][pos[0]] + 1
        if (ny == M - 1 and nx == N - 1): break
        q.append((nx, ny))

print(board[N-1][M-1])