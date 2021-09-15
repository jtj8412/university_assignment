answer = 0
s = input().split('-')
for a in s[0].split('+'):
    answer += int(a) * 2
for a in s:
    for b in a.split('+'):
        answer -= int(b)
print(answer)