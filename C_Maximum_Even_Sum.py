import sys
import math
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    a,b = map(int, input().split())
    sum =-1
    for i in range(1,b+1):
        if(b%i==0):
            c = i
            d = a*(b//i)
            if((c+d)%2==0):
                sum = c+d
                break
    print(sum)