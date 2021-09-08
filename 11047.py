n, k = map(int, input().split())
coin = []; ans = 0
for i in range(n): coin.append(int(input()))
for i in range(n - 1, -1, -1):
    ans += k // coin[i]
    k %= coin[i]
    if (k == 0): break
print(ans)