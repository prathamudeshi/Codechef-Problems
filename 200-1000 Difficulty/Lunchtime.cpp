//https://www.codechef.com/problems/LTIME
#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    cout<<((1<=x && x<=4)?"YES":"NO")<<endl;
	}
	return 0;
}
