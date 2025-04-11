def solve():
    n = int(input())
    nums = list(map(int, input().split()))

    nums.sort()
    if nums.count(0) == n:
        print(-1)
    elif nums[-1] > 0:
        print(nums[-1], nums[-1])
    else:
        print(nums[0], nums[0])
    
        
for _ in range(int(input())):
    solve()