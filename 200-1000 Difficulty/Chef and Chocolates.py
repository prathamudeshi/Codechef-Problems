# https://www.codechef.com/problems/CCHOCOLATES
t=int(input())
for j in range(t):
    x,y,z=map(int,input().split())
    print(int(((x*5)+(y*10))/z))