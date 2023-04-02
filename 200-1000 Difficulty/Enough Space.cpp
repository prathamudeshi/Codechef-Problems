//https://www.codechef.com/problems/ENSPACE
#include <iostream>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    cout<<((x+(2*y))<=n?"YES":"NO")<<endl;
	}
	return 0;
}
