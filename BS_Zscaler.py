def solve()-> None:
    n = int(input())
    v = list(map(int, input().split()))
    
    left, right = v[0], sum(v)
    def func(num)-> bool:
        vv = v[:]
        i = n - 1
        while i >= 2:
            if vv[i] > num:
                d = int(abs(num - vv[i]))
                vv[i-1] += d
            i -= 1
        return vv[1] <= num
            
    while left < right:
        mid = left + (right - left) // 2
        if (func(mid)):
            right = mid
        else:
            left = mid + 1
    
    print(left)
    
    
for _ in range(int(input())):
    solve()