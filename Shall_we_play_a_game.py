M = 998244353

def comp_mod(base, exp):
    return pow(base, exp, M)

def solve():
    n = int(input())
    if n % 2 == 1:
        print(comp_mod(2, n-1))
    else:
        print((3 * comp_mod(2, n- 2)) % M)

for _ in range(int(input())):
    solve()