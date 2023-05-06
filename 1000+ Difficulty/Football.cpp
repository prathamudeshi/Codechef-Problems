//https://www.codechef.com/problems/MSNSADM1
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	        if((2*a[i])-b[i]>ans)
	            ans=((2*a[i])-b[i]);
	    }
	    cout<<ans*10<<endl;
	}
	return 0;
}
