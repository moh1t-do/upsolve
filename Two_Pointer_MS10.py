from collections import defaultdict

def solve()-> None:
    n, l, r = map(int, input().split())
    vec = list(map(int, input().split()))
    mp = defaultdict(int)
    
    if r-l+1 > n:
        print(-1)
        return
    
    def check(num: int)-> bool:
        return num >= l and num <= r
    
    i, j, res = 0, 0, 1e9
    while j < n:
        if check(vec[j]):
            mp[vec[j]] += 1
        while len(mp) == r - l + 1:
            res = min(res, j-i+1)
            if check(vec[i]):
                mp[vec[i]] -= 1
                if mp[vec[i]] == 0:
                    del mp[vec[i]]
            i += 1
        j += 1
    
    res = -1 if res == 1e9 else res
    print(res) 

for _ in range(int(input())):
    solve()