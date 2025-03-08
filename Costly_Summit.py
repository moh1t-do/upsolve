from collections import Counter
def solve():
    n, c = map(int, input().split())
    s = str(input())
    cnts = sorted([c for num, c in Counter(s).items()], reverse=True)
    learning_cost = 0
    res, p = n * (n + 1) // 2, 0
    total = sum(cnts)
    for cnt in cnts:
        p += cnt
        rem = total - p
        learning_cost += c
        translator_cost = rem * (rem + 1) // 2
        res = min(res, learning_cost + translator_cost)
    
    print(res)

for _ in range(int(input())):
    solve()