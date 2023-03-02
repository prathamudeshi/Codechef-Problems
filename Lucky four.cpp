#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        while(n>0)
        {
            int a=n%10;
            n/=10;
            if(a==4)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
