//Codechef Problem Code :- FLOW007
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,rev;
    cin>>t;
    while(t--)
    {
        cin>>n;
        rev=0;
        while(n>0)
        {
            int a=n%10;
            n/=10;
            rev=(rev*10)+a;
        }
        cout<<rev<<endl;
    }
}
