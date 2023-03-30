//https://www.codechef.com/problems/PPSUM
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int ans=0,n,d,sum=0;
	    cin>>d>>n;
	    while(n>0)
	    {
	        sum+=n;
	        n--;
	    }
	    while(sum>0)
	    {
	        ans+=sum;
	        sum--;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
