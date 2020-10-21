n = int(input())
s = input()

ck = 0
for i in range(2, n):
    if s[i-2] == 'x' and s[i-1] == 'x' and s[i] == 'x':
        ck += 1

print(ck)


