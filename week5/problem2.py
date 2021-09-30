n = int(input())
hour = (15 * 45) + (60 * 15)
ans = (n + 1) * hour
if (n >= 3): ans = ans - hour + 3600
print(ans)

