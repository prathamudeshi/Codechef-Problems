//https://www.codechef.com/problems/EQUALDIST
#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    cout<<((a+b)%2==0?"YES":"NO")<<endl;
	}
	return 0;
}
