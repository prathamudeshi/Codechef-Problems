//https://www.codechef.com/problems/FINDSHOES
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    cout<<(n>m?n+n-m:n)<<endl;
	}
	return 0;
}
