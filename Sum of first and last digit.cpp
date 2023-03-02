#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        sum+=(n%10);
        while(n>9)
        {
            n/=10;
        }
        sum+=n;
        cout<<sum<<endl;
    }
}
