import sys
import numpy as np
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    values, counts = np.unique(arr, return_counts=True)
    isValid =True
    for i, j in zip(values, counts):
        if j % i != 0:
            print(-1)
            isValid = False
            break
    if not isValid:
        continue
    



