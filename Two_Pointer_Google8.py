def isSub(a: str, b: str) -> int:
    j: int = 0
    index: int = -1
    for i in range(len(a)):
        if j < len(b) and a[i] == b[j]:
            j += 1
            if index == -1:
                index = i
    if j == len(b):
        return index
    return -1

def solve() -> None:
    a: str = input()
    b: str = input()
    
    for i in range(1, len(b)):
        for j in range(26):
            c: str = b[:i] + chr(ord('a') + j) + b[i+1:]
            res: int = isSub(a, c)
            if res != -1:
                print(res)
                return
    
    print(-1)
    
t: int = int(input())
for _ in range(t):
    solve()
