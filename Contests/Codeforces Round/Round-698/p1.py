def solve():
    n = int(input())
    a = list(map(int, input().split()))

    for i in range(1, n):
        if a[i] == 0:
            continue
        if a[i] == a[i-1] + 1:
            a[i] = 0
        else:
            pass


T = 1
T = int(input())
for _ in range(1, T+1):
    solve()
