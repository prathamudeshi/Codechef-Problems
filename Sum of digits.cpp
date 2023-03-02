#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans,n,t,sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        while(n>0)
        {
            int a=n%10;
            n=n/10;
            sum+=a;
        }
        cout<<sum<<endl;
    }
}
