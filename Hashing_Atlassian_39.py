def solve():
    k = int(input())
    v = list(map(int, input().split()))
    mp = {}
    tsum, res = 0, 0
    for val in v:
        tsum += val
        a, b = val - k, val + k
        if a in mp:
            sum = tsum - mp[a] + a
            mp[a] = min(mp[a], tsum)
            res = max(res, sum)
        elif b in mp:
            sum = tsum - mp[b] + b
            mp[b] = min(mp[b], tsum)
            res = max(res, sum)
        else:
            mp[val] = tsum
        
    print(res)
            
for _ in range(int(input())):
    solve()