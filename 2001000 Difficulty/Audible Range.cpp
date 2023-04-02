//https://www.codechef.com/problems/AUDIBLE
#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    cout<<(x>=67 && x<=45000?"YES":"NO")<<endl;
	}
	return 0;
}
