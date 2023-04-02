//https://www.codechef.com/problems/LAZYCHF
#include <iostream>
using namespace std;

int main() {
	int t,x,m,d;
	cin>>t;
	while(t--)
	{
	    cin>>x>>m>>d;
	    cout<<((m*x)>x+d?x+d:m*x)<<endl;
	}
	return 0;
}
