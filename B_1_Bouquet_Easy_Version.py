def solve():
    n, k = map(int, input().split())
    v = list(map(int, input().split()))
    v.sort()
    i = 0
    j = 0
    current_sum = 0
    result = 0
    
    while j < n:
        current_sum += v[j]
        
        while (current_sum > k or (v[j] - v[i] > 1)):
            current_sum -= v[i]
            i += 1
        
        result = max(result, current_sum)
        j += 1
    
    print(result)


t = int(input())
for _ in range(t):
    solve()