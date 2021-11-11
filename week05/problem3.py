input_data = input()
r = int(input_data[1])
c = int(ord(input_data[0])) - int(ord('a')) + 1
steps = [(-2,-1), (-1,-2), (1,-2), (2,-1), (2,1), (1,2), (-1,2), (-2,1)]
result = 0
for step in steps:
    nr = r + step[0]
    nc = c + step[1]
    if (nr >= 1 and nr <= 8 and nc >= 1 and nc <= 8): result += 1
print(result)