# https://www.codechef.com/problems/HDIVISR
n=int(input())
for x in range (10,0,-1):
    if n%x==0:
        print(x)
        break