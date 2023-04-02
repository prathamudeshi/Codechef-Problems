//https://www.codechef.com/problems/TODOLIST
#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int q[n],ans=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>q[i];
	        if(q[i]>=1000)
	        ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
