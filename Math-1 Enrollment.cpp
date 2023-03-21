//https://www.codechef.com/problems/M1ENROL
#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    z=y-x;
	    cout<<(z>0?z:0)<<endl;
	}
	return 0;
}
