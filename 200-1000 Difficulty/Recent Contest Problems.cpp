//https://www.codechef.com/problems/RECENTCONT?tab=statement
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b=0,a=0;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(s[0]=='S')
                a++;
            else
                b++;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}