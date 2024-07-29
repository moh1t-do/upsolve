def solve():
    v = list(map(int, input().split()))
    mp = {}
    tsum, res = 0, -10**9
    for val in v:
        tsum += val
        res = max(res, val)
        if val in mp:
            sum = tsum - mp[val] + val
            res = max(res, sum)
            mp[val] = min(mp[val], tsum)
        else:
            mp[val] = tsum
        
    print(res)
            
for _ in range(int(input())):
    solve()