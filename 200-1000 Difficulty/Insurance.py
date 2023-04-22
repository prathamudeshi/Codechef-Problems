# https://www.codechef.com/problems/INSURANCE
t=int(input())
for j in range(t):
    x,y=map(int,input().split())
    print(x) if x<=y else print(y)