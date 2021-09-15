s = input()
answer = int(s[0])
for ch in s:
    num = int(ch)
    answer = answer + num if (num <= 1 or answer <= 1) else answer * num
print(answer)