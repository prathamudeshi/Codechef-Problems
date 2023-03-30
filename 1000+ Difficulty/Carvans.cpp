//https://www.codechef.com/problems/CARVANS
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i==0)
                continue;
            if(arr[i]<=arr[i-1])
                max++;
        }
        cout<<max<<endl;
    }
    return 0;
}
