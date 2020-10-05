import math

t = int(input())

for i in range(t):
    n = int(input())

    sq = int(math.sqrt(n))
    ck = 0

    for j in range(2, sq+1):
        if n % j == 0:
            ck = 1
            break

    if ck == 0:
        print(1, n-1)
    else:
        print(n//j, n-n//j)


