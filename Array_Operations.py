def solve():
    n = int(input())
    arr = list(map(int, input().split()))

    if n == 1:
        print(arr[0])
    else:
        mx = max(arr)
        found = False
        for i in range(n, 2):
            if arr[i] == mx:
                found = True
        
        res = mx + n // 2 - 1
        if found:
            res += 1
        print(res)


for _ in range(int(input())):
    solve()