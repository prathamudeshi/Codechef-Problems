//https://www.codechef.com/problems/VOLCONTROL
#include <iostream>
using namespace std;

int main() {
	int t,x,y,ans;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x>y)
	    {
	        ans=x-y;
	    }
	    else
	    ans=y-x;
	    cout<<ans<<endl;
	}
	return 0;
}
