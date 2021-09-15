answer = 0
n, k = map(int, input().split())
while True:
    tmp = (n // k) * k
    answer += n - tmp
    n = tmp
    if n < k: break
    answer += 1
    n //= k
answer += n - 1
print(answer)
