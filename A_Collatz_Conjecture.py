import sys
input = sys.stdin.readline

t = int(input())
while (t>0):
    z, x = map(int, input().split())
    for i in range(z):
        if((x-1)%3 == 0 and ((x-1)%3)%2==1):
            x = (x-1)//3
        else :
            x = 2*x
    print(x)
    t-=1
