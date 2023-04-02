//https://www.codechef.com/problems/BATTERYLOW
#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    cout<<(x<=15?"YES":"NO")<<endl;
	}
	return 0;
}
