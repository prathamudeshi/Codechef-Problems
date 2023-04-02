#https://www.codechef.com/problems/ENSPACE?tab=statement
t=int(input())
for x in range(t):
    n,x,y=map(int,input().split())
    if(n-x-(2*y)>=0):
        print("YES")
    else:
        print("NO")
