//https://www.codechef.com/problems/CSUB?tab=statement
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ones=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                ones++;
        }
        cout<<(ones+1)*ones/2<<endl;
    }
}