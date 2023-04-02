//https://www.codechef.com/problems/FLOW018
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans=1;
    for(int i=2;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<fact(n)<<endl;
	}
	return 0;
}
