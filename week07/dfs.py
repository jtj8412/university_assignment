dx = (0,0,-1,1); dy = (-1,1,0,0)
N, M = map(int, input().split())
board = []
answer = 0
for i in range(N): board.append(list(map((lambda n: int(n) * 0x7fffffff), input())))
board[0][0] = 1

stk = [(0, 0)]

while len(stk) != 0:
    x, y = stk.pop()
    if (x == M - 1 and y == N - 1):
        answer = board[y][x]
        continue
    
    for i in range(4):
        nx = x + dx[i]; ny = y + dy[i]
        if (nx < 0 or ny < 0 or nx >= M or ny >= N or board[ny][nx] == 0 or board[ny][nx] <= board[y][x] + 1): continue
        board[ny][nx] = board[y][x] + 1
        stk.append((nx, ny))

print(answer)