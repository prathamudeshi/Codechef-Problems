# https://www.codechef.com/problems/MAXDIFFMIN
t=int(input())
for j in range(t):
    a,b,c=map(int,input().split())
    print((max(a,b,c))-min(a,b,c))