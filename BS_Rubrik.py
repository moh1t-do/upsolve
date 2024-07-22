def solve():
    n = int(input())
    left, right = 0, n
    
    def func(num)-> bool:
        d = num // 2
        mx = d * (d + 1)
        mx = mx + d + 1 if num % 2 else mx
        return mx >= n
    
    res = 0    
    while left <= right:
        mid = left + (right - left) // 2
        if func(mid):
            res = mid
            right = mid - 1
        else:
            left = mid + 1
    
    print(res)
    
for _ in range(int(input())):
    solve()