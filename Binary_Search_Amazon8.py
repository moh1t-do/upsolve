import math

def solve()-> None:
    n, d = map(int, (input().split()))
    v = list(map(int, input().split()))
    
    if n > d:
        print(-1)
        pass
    
    def func(k: int):
        sum = 0
        for e in v:
            sum += math.ceil(e / k)
        return sum <= d 
    
    l, r = 1, sum(v)
    
    while l < r:
        m: int = l + (r - l) // 2
        if func(m):
            r = m
        else:
            l = m + 1
    
    print(l)
    
    
t = int(input())
for _ in range(t):
    solve()