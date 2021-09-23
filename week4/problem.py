n = int(input())
arr = [int(i) for i in input().split()]
j = n - 1
for i in range(n - 1, -1, -1):
    if arr[i] == 0:
        while arr[j] == 0 and j >= 0: j -= 1
        if i >= j: continue
        arr[i] = arr[j]
        arr[j] = 0
print(arr)