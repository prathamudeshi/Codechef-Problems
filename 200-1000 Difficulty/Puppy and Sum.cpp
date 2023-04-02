//https://www.codechef.com/problems/PPSUM
#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>d>>n;
        int ans=sum(n);
        while(d>1)
        {
            ans=sum(ans);
            d--;
        }
        cout<<ans<<endl;
    }
    return 0;
}