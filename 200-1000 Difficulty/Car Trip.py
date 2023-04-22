# https://www.codechef.com/problems/CARTRIP?tab=statement
t=int(input())
for j in range(t):
    x=int(input())
    print(x*10) if x>=300 else print("3000")