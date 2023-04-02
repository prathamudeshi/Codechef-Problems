//https://www.codechef.com/problems/FAIRPASS
#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    cout<<(k-n>0?"YES":"NO")<<endl;
	}
	return 0;
}
