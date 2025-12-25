import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    res = [n if x == n else n - x+1 for x in arr]
    print(*res)

