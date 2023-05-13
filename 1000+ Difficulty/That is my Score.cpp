//https://www.codechef.com/problems/WATSCORE
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans=0;
	    cin>>n;
	    int s[n],p[n],a[11]={0};
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i]>>p[i];
	        if(a[s[i]]<p[i])
	        {
	            a[s[i]]=p[i];
	        }
	    }
	    for(int i=0;i<9;i++)
	    {
	        ans+=a[i];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
