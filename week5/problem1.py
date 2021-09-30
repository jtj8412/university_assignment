n = int(input())
plans = input().split()
x, y = 1, 1
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
cmds = {'U' : 0, 'D' : 1, 'L' : 2, 'R' : 3}

for plan in plans:
    idx = cmds[plan]
    nx = x + dx[idx]; ny = y + dy[idx]
    if nx < 1 or nx > n or ny < 1 or ny > n: continue
    x, y = nx, ny

print(x, y)