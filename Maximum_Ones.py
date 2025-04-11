def solve():
    n, k = map(int, input().split())
    s = list(input())
    cnt = 0 if s[-1] == '0' else 1
    for i in range(n-2, -1, -1):
        if s[i] == '1':
            cnt += 1
        else:
            if k > 0 and s[i+1] == '1':
                s[i] = '1'
                k -= 1
                cnt += 1
    print(cnt)


for _ in range(int(input())):
    solve()