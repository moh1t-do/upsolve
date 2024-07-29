from collections import defaultdict

def solve():
    k = int(input())
    v = list(map(int, input().split()))
    mp = defaultdict(int)
    res = 0
    if k == 0:
        print(len(v))
        return
    
    for val in v:
        if  val - k in mp:
            res += 1
            mp[val - k] -= 1
            if mp[val - k] == 0:
                del mp[val - k]
        else:
            mp[val] += 1
        
    print(res)
            
for _ in range(int(input())):
    solve()