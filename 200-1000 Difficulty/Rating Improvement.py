# https://www.codechef.com/problems/ADVANCE
t=int(input())
for j in range(t):
    x,y=map(int,input().split())
    print("YES") if (y>=x and y<=(x+200)) else print("NO")