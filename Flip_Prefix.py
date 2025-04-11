def solve():
    n = int(input())
    s = str(input())
    cnt, z = 0, 0
    for c in s:
        if c == "0":
            z -= 1
        elif c == "1":
            z += 1
        if z == 0:
            cnt += 1
    
    print(2 ** cnt)
    
        
for _ in range(int(input())):
    solve()
