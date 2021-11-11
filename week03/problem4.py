n = int(input())
arr = [int(i) for i in input().split()]
arr.sort()
answer = 0; val = 0
for i in arr:
    val += i
    answer += val
print(answer)