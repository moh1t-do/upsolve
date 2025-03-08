def solve():
    x, y, z, a, b, c = map(int, input().split())
    happy_people = 0
    xl = min(z, c)
    z -= xl
    y += z
    l = min(y, b)
    y -= l
    x += y
    s = min(x, a)
    happy_people = xl + l + s
    print(happy_people)

for _ in range(int(input())):
    solve()