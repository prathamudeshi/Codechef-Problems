# https://www.codechef.com/problems/BOBBANK
t=int(input())
for j in range(t):
    w,x,y,z=map(int,input().split())
    print(w+(x*z)-(y*z))