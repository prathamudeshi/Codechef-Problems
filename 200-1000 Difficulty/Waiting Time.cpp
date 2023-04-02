//https://www.codechef.com/problems/WAITTIME
#include <iostream>
using namespace std;

int main() {
	int t,k,x,a;
	cin>>t;
	while(t--)
	{
	    cin>>k>>x;
	    a=k*7;
	    cout<<a-x<<endl;
	}
	return 0;
}
