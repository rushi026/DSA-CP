t = int(input())
while t > 0:
    t -=1
    s = input()
    n = len(s)
    if n < 4:
        print('YES')
        continue
    if '100' in s:
        print('NO')
    else:
        print('YES')